//
//  UPOSSCRController.h
//  BixolonUPOS
//
//  Created by savin on 13. 11. 5..
//  Copyright (c) 2013년 savin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPOSDeviceController.h"

#define MAX_SETBITMAP_NUM   20

@interface UPOSSCRController : UPOSDeviceController
{
    ////////////////////////////////////////////////////////////////////////////
    //  -- Start --
    //  규약 안에 있는 변수 선언  Start.
    //  Define to The variables in UPOS Protocol 1.13
    //  Property 이름에 _(언더바)붙어서 자동으로 선언 됨.
    
    //  규약 안에 있는 변수 선언  End.
    //  Tha variable in UPOS Protocol 1.13
    //                                  -- END --                       ////////
    ////////////////////////////////////////////////////////////////////////////
    
    
    
    //    BOOL    	_DoFlagWhenIdle;
    NSString*                _commandClassName;
    
    NSInteger                _resultSCR;
    
    
}


@property (readonly)             BOOL                        CapCardErrorDetection;
@property (readonly)             NSInteger                   CapInterfaceMode;
@property (readonly)             NSInteger                   CapIsoEmvMode;
@property (readonly)             NSInteger                   CapSCPresentSensor;
@property (readonly)             NSInteger                   CapSCSlots;
@property (readonly)             NSInteger                   CapTransmissionProtocol;



@property (readwrite)            NSInteger                   InterfaceMode;
@property (readwrite)            NSInteger                   IsoEmvMode;
@property (readonly)             NSInteger                   SCPresentSensor;
@property (readwrite)            NSInteger                   SCSlot;
@property (readonly)             BOOL                        TransactionInProgress;
@property (readonly)             NSInteger                   TransactionProtocol;




////////////////////////////////////////////////////////////////////////////
//  -- Start --
//  규약 안에 있는 함수 선언  Start.
//  Define to Tha variables in UPOS Protocol 1.13

-(NSInteger) beginInsertion : (NSInteger) timeout;

-(NSInteger) beginRemoval : (NSInteger) timeout;

-(NSInteger) endInsertion;

-(NSInteger) endRemoval;

-(NSInteger) readData : (NSInteger) action
                 data : (NSData**) data;

-(NSInteger) writeData : (NSInteger) action
                  data : (NSData*) data;

//  규약 안에 있는 함수 선언 End.
//  Define to Tha variables in UPOS Protocol 1.13
//                                  -- END --                       ////////
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////
//  -- Start --
//  Setter/Getter 등 변수가 변경 될 때 한꺼번에 해야 할 일을 모아둔 함수들
//  접두어 : do
//  반환 업음.
//-(void)doDeviceEnabled:(BOOL)bEnable;

//  Setter/Getter 등 변수가 변경 될 때 한꺼번에 해야 할 일을 모아둔 함수들
//                                  -- END --                       ////////
////////////////////////////////////////////////////////////////////////////

@end































