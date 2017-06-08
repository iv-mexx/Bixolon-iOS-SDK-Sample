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

@interface UPOSMSRController : UPOSDeviceController
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




@property (strong, readonly)      NSString*              AccountNumber;
@property (strong, readonly)      NSString*              AdditionalSecurityInformation;
@property (strong, readonly)      NSString*              CardAuthenticationData;
@property (readonly)              NSInteger              CardAuthenticationDataLength;
@property (strong, readonly)      NSString*              CardPropertyList;
@property (strong, readonly)      NSString*              CardType;
@property (strong, readonly)      NSString*              CardTypeList;
@property (readwrite)             NSInteger              DataEncryptionAlgorithm;
@property (readwrite)             BOOL                   DecodeData;
@property (readonly)              BOOL                   DeviceAuthenticated;
@property (readonly)              NSInteger              DeviceAuthenticationProtocol;
@property (readonly)              NSInteger              EncodingMaxLength;
@property (readwrite)             NSInteger              ErrorReportingType;
@property (strong, readonly)      NSString*              ExpirationDate;
@property (strong, readonly)      NSString*              FirstName;
@property (strong, readonly)      NSString*              MiddleInitial;
@property (readwrite)             BOOL                   ParseDecodeData;
@property (strong, readonly)      NSString*              ServiceCode;
@property (strong, readonly)      NSString*              Suffix;
@property (strong, readonly)      NSString*              Surname;
@property (strong, readonly)      NSString*              Title;
@property (strong, readonly)      NSString*              Track1Data;
@property (strong, readonly)      NSData*              Track1EncryptedData;
@property (readonly)              NSInteger              Track1EncryptedDataLength;
@property (strong, readonly)      NSString*              Track2Data;
@property (strong, readonly)      NSData*              Track2EncryptedData;
@property (readonly)              NSInteger              Track2EncryptedDataLength;
@property (strong, readonly)      NSString*              Track3Data;
@property (strong, readonly)      NSData*              Track3EncryptedData;
@property (readonly)              NSInteger              Track3EncryptedDataLength;
@property (strong, readonly)      NSString*              Track4Data;
@property (strong, readonly)      NSData*              Track4EncryptedData;
@property (readonly)              NSInteger              Track4EncryptedDataLength;
@property (readwrite)             NSInteger              TracksToRead;
@property (readwrite)             NSInteger              TracksToWrite;
@property (readwrite)             BOOL                   TransmitSentinels;
@property (strong, readwrite)     NSString*              WriteCardType;

////////////////////////////////////////////////////////////////////////////
//  -- Start --
//  규약 안에 있는 함수 선언  Start.
//  Define to Tha variables in UPOS Protocol 1.13



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






























