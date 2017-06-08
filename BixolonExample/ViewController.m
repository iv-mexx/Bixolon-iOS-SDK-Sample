//
//  ViewController.m
//  BixolonExample
//
//  Created by Markus Chmelar on 08/06/2017.
//  Copyright © 2017 Innovaptor OG. All rights reserved.
//

#import "ViewController.h"
#import "BixolonPrinter.h"

@interface ViewController ()
@property(nonatomic, strong)BixolonPrinter *printer;
@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
#if TARGET_IPHONE_SIMULATOR
  // The Bixolon SDK Crashes when `UPOSPrinterController` is allocated on the simulator
  self.printer = nil; // Or better, a mock
#else
  self.printer = [[BixolonPrinter alloc] init];
#endif
}

- (IBAction)print:(id)sender {
  [self.printer printTest];
}

@end
