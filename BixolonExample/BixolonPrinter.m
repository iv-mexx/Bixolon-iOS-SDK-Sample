//
//  BixolonPrinter.m
//  BixolonExample
//
//  Created by Markus Chmelar on 08/06/2017.
//  Copyright © 2017 Innovaptor OG. All rights reserved.
//

#import "BixolonPrinter.h"
#import "UPOSPrinterController.h"

@interface BixolonPrinter()
@property(nonatomic, strong)UPOSPrinterController *uposPrinterController;
@property(nonatomic, strong)UPOSPrinters *deviceList;
@end

@implementation BixolonPrinter

- (instancetype)init
{
  self = [super init];
  if (self) {
    _uposPrinterController = [UPOSPrinterController new];
    [_uposPrinterController setLogLevel: LOG_SHOW_NEVER ];
    
    [_uposPrinterController setTextEncoding:NSASCIIStringEncoding];
    _uposPrinterController.CharacterSet = 437;
    
    _deviceList =   (UPOSPrinters*)[_uposPrinterController getRegisteredDevice];
    while([_deviceList getList].count)
    {
      [_deviceList removeDevice:[[_deviceList getList] lastObject]];
    }
  }
  return self;
}

-(void)printTest
{
  // Connect to paired device
  if([self.deviceList getList].count == 0) {
    UPOSPrinter *printer = [[self.deviceList getPairedDevices] firstObject];
    [self.deviceList addDevice:printer];
    [self.deviceList save];
    
    // Open Connection to the printer
    if ([self printerOpenClose:YES] != UPOS_SUCCESS) {
      NSLog(@"Error when opening the printer: %@", self.uposPrinterController.ErrorString);
      return;
    }
    if ([self printerClaimRelease:YES] != UPOS_SUCCESS) {
      NSLog(@"Error when claiming the printer: %@", self.uposPrinterController.ErrorString);
    }
    [self printerEnableDisable:YES];
  }
  
  // Print Text
  [self.uposPrinterController
   printNormal:PTR_S_RECEIPT
   data:@"Test\n\r"];

  // Print Image
  UIImage *image = [UIImage imageNamed:@"printer"];
  [self.uposPrinterController
   printBitmap:PTR_S_RECEIPT
   image:image
   width:self.uposPrinterController.RecLineWidth
   alignment:PTR_BM_CENTER];
  
  // Print QRCode
  [self.uposPrinterController
   printBarcode:PTR_S_RECEIPT
   data:@"QR-Code Data"
   symbology:PTR_BCS_QRCODE
   height:100
   width:100
   alignment:PTR_BC_CENTER
   textPostion:PTR_BC_TEXT_NONE];
}

- (NSInteger)printerOpenClose:(BOOL)open
{
  if([[self.deviceList getList] count] == 0) {
    NSLog(@"Error: No Devices");
    return UPOS_E_NOHARDWARE;
  }
  
  UPOSPrinter* device  = [[self.deviceList getList] objectAtIndex:0];
  if(!open)
    return [self.uposPrinterController close];
  else
    return [self.uposPrinterController open:device.modelName];
}

- (NSInteger)printerClaimRelease:(BOOL)claim
{
  if(!claim)
    return [self.uposPrinterController releaseDevice];
  else
    return [self.uposPrinterController claim:5000];
}

- (void)printerEnableDisable:(BOOL)enable
{
  if(!enable)
    self.uposPrinterController.DeviceEnabled = NO;
  else
    self.uposPrinterController.DeviceEnabled = YES;
}

@end


