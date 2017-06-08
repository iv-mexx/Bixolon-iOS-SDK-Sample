//
//  UPOSDeviceController.h
//  BixolonUPOS
//
//  Created by savin on 13. 11. 7..
//  Copyright (c) 2013년 savin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPOSDevices.h"
#import "UPOSDeviceControlDelegate.h"


//#define UPOS_DEVICES    @"UPOSDevices"

#define UPOS_DEVICES @"com.UPOSCompliant.DeviceList"

@class SbinInterfaceHandler;
@class SbinEventHandler;

////////////////////////////////////////////////////////////////////////////
//  -- Start --
//  내부 확인용 변수
//  Internal Variable.
static NSInteger   _controlLevel;// = _UPOSSTATUS_CLOSED;
static SbinInterfaceHandler    *_ifPort = nil;  //*_if;


//static const SbinInterfaceHandler *_ifPort;// = nil;
@interface UPOSDeviceController:NSObject
{
    UPOSDevices             *_listOfDevices;
    UPOSDevice              *_targetDevice;
    SbinInterfaceHandler    *_ifPort;  //*_if;
    SbinEventHandler        *_eventHandler;
    id<UPOSDeviceControlDelegate>	_delegate;
    
    // add lookup
    


    
    ////////////////////////////////////////////////////////////////////////////
    //  -- Start --
    //  규약 안에 있는 변수 선언  Start.
    //  Define to Tha variables in UPOS Protocol 1.13
    //  Property 이름에 _(언더바)붙어서 자동으로 선언 됨.
    //  규약 안에 있는 변수 선언  Start.
    //  Tha variable in UPOS Protocol 1.13
    //                                  -- END --                       ////////
    ////////////////////////////////////////////////////////////////////////////
    
    
    
    ////////////////////////////////////////////////////////////////////////////
    //  -- Start --
    //  규약을 따르기 위해 만든 변수 선언,  Properties 하고 연결 해주기.
    //  Define to The variables for following UPOS Protocol 1.13
    NSInteger              _OpenResult;
    NSInteger              _ResultCode;
    NSInteger              _ResultCodeExtended;
    NSInteger              _State;
    BOOL                   _Claimed;
    
    //  규약을 따르기 위해 만든 변수 선언
    //  Define to The variables for following UPOS Protocol 1.13
    //                                  -- END --                       ////////
    ////////////////////////////////////////////////////////////////////////////
}


-(void) setDelegate:(id<UPOSDeviceControlDelegate>)obj;
//  규약엔 없으나, Registry 구조가 없으므로 반드시 가져가야 하는 함수.
-(NSString*) getAvailableNewModelString:(NSString*)newModel;
-(NSMutableArray*) getSupportDeviceStrings;
-(NSMutableArray*) getRegisteredPrinterStrings;
-(UPOSDevices*) getRegisteredDevice;

//  원래 규약상 리턴형은 void,  OPOS 소스만 long형으로 되어있는데,
//  그냥 리턴값을 가지고 가기로 함. (void를 사용하는 사용자에게는 리턴형이 특별한 의미가 없을 것이므로..)
-(NSInteger) open : (NSString*)logicalDeviceName;
-(NSInteger) close;
-(NSInteger) claim : (NSInteger)timeout;
-(NSInteger) releaseDevice;  // release를 사용해야 하지만,  NSObject에서 사용하는 함수와 이름이 겹침. 따라서 변경.
-(NSInteger) checkHealth : (NSInteger) level;

-(NSInteger) clearInput;             // 미구현
-(NSInteger) clearInputProperties;   // 미구현

-(NSInteger) clearOutput;
-(NSInteger) directIO : (NSInteger)command
                 data : (void*)data
               object : (void*)object;
-(NSInteger) compareFirmwareVersion : (NSString*)firmwareFileName
                             result : (NSInteger)result;
-(NSInteger) resetStatistics : (NSString*)statisticsBuffer;
-(NSInteger) retrieveStatistics : (NSString*)statisticsBuffer;
-(NSInteger) updateFirmware : (NSString*)firmwareFileName;
-(NSInteger) updateStatistics : (NSString*)statisticsBuffer;

-(void)     refreshWifiLookup;
-(void)     refreshBTLookup ;
-(void)     refreshEthernetLookup ;
-(void)     refreshBLELookup ;

-(void)     setNetconfiguration;

-(void)     setLogLevel:(Byte)level;

//////
//
@property (assign, nonatomic)				id<UPOSDeviceControlDelegate>	delegate;
@property                         BOOL        AutoDisable;
@property (readonly)              BOOL        CapCompareFirmwareVersion;
@property (readonly)              BOOL        CapPowerReporting;
@property (readonly)              BOOL        CapStatisticsReporting;
@property (readonly)              BOOL        CapUpdateFirmware;
@property (readonly)              BOOL        CapUpdateStatistics;
@property (strong, readonly)      NSString*   CheckHealthText;
@property (readonly)              BOOL        Claimed;
@property (readonly)              NSInteger   DataCount;
@property                         BOOL        DataEventEnabled;
@property                         BOOL        DeviceEnabled;
@property                         BOOL        FreezeEvents;
@property (readonly)              NSInteger   OpenResult;
@property (readonly)              NSInteger   ResultCode;
@property (readonly)              NSInteger   ResultCodeExtended;
@property (readonly)              NSInteger   OutputID;
@property                         NSInteger   PowerNotify;
@property (readonly)              NSInteger   PowerState;
@property (readonly)              NSInteger   State;

@property (strong, readonly)      NSString*   DeviceControlDescription;
@property                         float       DeviceControlVersion;
@property (strong, readonly)      NSString*   DeviceServiceDescription;
@property                         float       DeviceServiceVersion;
@property (strong, readonly)      NSString*   PhysicalDeviceDescription;
@property (strong, readonly)      NSString*   PhysicalDeviceName;


@property (assign)	unsigned short			portSrc;
@property (assign)	unsigned short			portDest;


//@property NSInteger  AsyncMode;// printer

@end

























