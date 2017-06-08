//
//  UPOSDeviceControlDelegate.h
//  BixolonUPOS
//
//  Created by savin on 13. 11. 18..
//  Copyright (c) 2013년 savin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol UPOSDeviceControlDelegate <NSObject>

@required

@optional

-(void)DataEvent:(NSNumber*) status;
-(void)DirectIOEvent:(NSNumber*) eventNumber
                Data:(NSNumber*) data
                 Obj:(id) obj;

- (void)ErrorEvent:(NSNumber*) errorCode
 errorCodeExtended:(NSNumber*) errorCodeExtended
        errorLocus:(NSNumber*) errorLocus
     errorResponse:(NSNumber*) errorResponse;

- (void)OutputCompleteEvent:(NSNumber*)outputID;

-(void)StatusUpdateEvent:(NSNumber*) status;

//- (void) DirectIOEvent:(NSInteger) EventNumber
//                  Data:(NSInteger) Data
//                   Obj:

@end
