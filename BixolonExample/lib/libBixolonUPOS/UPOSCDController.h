//
//  UPOSCDController.h
//  BixolonUPOS
//
//  Created by savin on 13. 11. 5..
//  Copyright (c) 2013년 savin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPOSDefinesCashDrawer.h"
#import "UPOSDeviceController.h"

#define MAX_SETBITMAP_NUM   20

@interface UPOSCDController : UPOSDeviceController
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
    
    
    
}



@property (readonly)              BOOL              DrawerOpened;


////////////////////////////////////////////////////////////////////////////
//  -- Start --
//  규약 안에 있는 함수 선언  Start.
//  Define to Tha variables in UPOS Protocol 1.13
-(NSInteger) OpenDrawer;
-(NSInteger) waitForDrawerClose:(NSInteger) beepTimeout
                  beepFrequency:(NSInteger) beepFrequency
                   beepDuration:(NSInteger) beepDuration
                      beepDelay:(NSInteger) beepDelay;




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






























