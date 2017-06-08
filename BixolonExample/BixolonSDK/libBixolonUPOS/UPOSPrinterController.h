//
//  UPOSPrinterController.h
//  BixolonUPOS
//
//  Created by savin on 13. 11. 5..
//  Copyright (c) 2013년 savin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPOSDefinesPrinter.h"
#import "UPOSDeviceController.h"
#import <UIKit/UIKit.h>

#define MAX_SETBITMAP_NUM   20
#define ET_LOG

@interface UPOSPrinterController : UPOSDeviceController
{
    ////////////////////////////////////////////////////////////////////////////
    //  -- Start --
    //  규약 안에 있는 변수 선언  Start.
    //  Define to Tha variables in UPOS Protocol 1.13
    //  Property 이름에 _(언더바)붙어서 자동으로 선언 됨.
    //  규약 안에 있는 변수 선언  Start.
    //  Tha variable in UPOS Protocol 1.13
    //                                  -- END --                       ////////
    ////////////////////////////////////////////////////////////////////////////
    
    
    
//    BOOL    	_DoFlagWhenIdle;
    
    
}

// common
//@property NSInteger  DeviceEnabled;
//@property NSInteger  FreezeEvents;
//@property NSInteger  PowerNotify;

@property (readonly)              NSInteger         CapCharacterSet;
@property (readonly)              BOOL              CapConcurrentJrnRec;
@property (readonly)              BOOL              CapConcurrentJrnSlp;
@property (readonly)              BOOL              CapConcurrentPageMode;
@property (readonly)              BOOL              CapConcurrentRecSlp;
@property (readonly)              BOOL              CapCoverSensor;
@property (readonly)              BOOL              CapMapCharacterSet;
@property (readonly)              BOOL              CapTransaction;

@property (readonly)              BOOL              CapJrnPresent;
@property (readonly)              BOOL              CapJrn2Color;
@property (readonly)              BOOL              CapJrnBold;
@property (readonly)              BOOL              CapJrnDhigh;
@property (readonly)              BOOL              CapJrnDwide;
@property (readonly)              BOOL              CapJrnDwideDhigh;
@property (readonly)              BOOL              CapJrnEmptySensor;
@property (readonly)              BOOL              CapJrnItalic;
@property (readonly)              BOOL              CapJrnNearEndSensor;
@property (readonly)              BOOL              CapJrnUnderline;
@property (readonly)              NSInteger         CapJrnCartridgeSensor;
@property (readonly)              NSInteger         CapJrnColor;
@property (readonly)              BOOL              CapRecPresent;
@property (readonly)              BOOL              CapRec2Color;
@property (readonly)              BOOL              CapRecBarCode;
@property (readonly)              BOOL              CapRecBitmap;
@property (readonly)              BOOL              CapRecBold;
@property (readonly)              BOOL              CapRecDhigh;
@property (readonly)              BOOL              CapRecDwide;
@property (readonly)              BOOL              CapRecDwideDhigh;
@property (readonly)              BOOL              CapRecEmptySensor;
@property (readonly)              BOOL              CapRecItalic;
@property (readonly)              BOOL              CapRecLeft90;
@property (readonly)              BOOL              CapRecNearEndSensor;
@property (readonly)              BOOL              CapRecPapercut;
@property (readonly)              BOOL              CapRecRight90;
@property (readonly)              BOOL              CapRecRotate180;
@property (readonly)              BOOL              CapRecStamp;
@property (readonly)              BOOL              CapRecUnderline;
@property (readonly)              NSInteger         CapRecCartridgeSensor;
@property (readonly)              NSInteger         CapRecColor;
@property (readonly)              NSInteger         CapRecMarkFeed;
@property (readonly)              BOOL              CapRecPageMode;
@property (readonly)              NSInteger         CapRecRuledLine;

@property (readonly)              BOOL              CapSlpPresent;
@property (readonly)              BOOL              CapSlpFullslip;
@property (readonly)              BOOL              CapSlp2Color;
@property (readonly)              BOOL              CapSlpBarCode;
@property (readonly)              BOOL              CapSlpBitmap;
@property (readonly)              BOOL              CapSlpBold;
@property (readonly)              BOOL              CapSlpDhigh;
@property (readonly)              BOOL              CapSlpDwide;
@property (readonly)              BOOL              CapSlpDwideDhigh;
@property (readonly)              BOOL              CapSlpEmptySensor;
@property (readonly)              BOOL              CapSlpItalic;
@property (readonly)              BOOL              CapSlpLeft90;
@property (readonly)              BOOL              CapSlpNearEndSensor;
@property (readonly)              BOOL              CapSlpRight90;
@property (readonly)              BOOL              CapSlpUnderline;
@property (readonly)              BOOL              CapSlpBothSidesPrint;
@property (readonly)              NSInteger         CapSlpCartridgeSensor;
@property (readonly)              NSInteger         CapSlpColor;
@property (readonly)              BOOL              CapSlpPageMode;
@property (readonly)              NSInteger         CapSlpRuledLine;

@property (nonatomic)             BOOL              AsyncMode;
@property                         NSInteger         CartridgeNotify;
@property (nonatomic)             NSInteger         CharacterSet;
@property (strong, readonly)      NSString*         CharacterSetList;
@property                         BOOL              CoverOpen;
@property (readonly)              NSInteger         ErrorLevel;
@property (readonly)              NSInteger         ErrorStation;
@property (strong, readonly)      NSString*         ErrorString;
@property (strong, readonly)      NSString*         FontTypefaceList;
@property (nonatomic)             BOOL              FlagWhenIdle;
@property (nonatomic)             BOOL              MapCharacterSet;
@property                         NSInteger         MapMode;
@property (strong, readonly)      NSString*         PageModeArea;

@property (readonly)              NSInteger         PageModeDescriptor;
@property (readonly)              NSInteger         PageModeHorizontalPosition;
@property (strong)                NSString*         PageModePrintArea;
@property                         NSInteger         PageModePrintDirection;
@property                         NSInteger         PageModeStation;
@property                         NSInteger         PageModeVerticalPosition;
@property                         NSInteger         RotateSpecial;

@property                         NSInteger         JrnLineChars;
@property (strong, readonly)      NSString*         JrnLineCharsList;
@property                         NSInteger         JrnLineHeight;
@property                         NSInteger         JrnLineSpacing;
@property (readonly)              NSInteger         JrnLineWidth;
@property                         BOOL              JrnLetterQuality;
@property (readonly)              BOOL              JrnEmpty;
@property (readonly)              BOOL              JrnNearEnd;
@property (readonly)              NSInteger         JrnCartridgeState;
@property (readonly)              NSInteger         JrnCurrentCartidge;


@property                         NSInteger         RecLineChars;
@property (strong, readonly)      NSString*         RecLineCharsList;
@property                         NSInteger         RecLineHeight;
@property                         NSInteger         RecLineSpacing;
@property (readonly)              NSInteger         RecLineWidth;
@property                         BOOL              RecLetterQuality;
@property (readonly)              BOOL              RecEmpty;
@property (readonly)              BOOL              RecNearEnd;
@property (readonly)              NSInteger         RecSidewaysMaxLines;
@property (readonly)              NSInteger         RecSidewaysMaxChars;
@property (readonly)              NSInteger         RecLinesToPaperCut;
@property (strong, readonly)      NSString*         RecBarCodeRotationList;
@property (strong, readonly)      NSString*         RecBitmapRotationList;
@property (readonly)              NSInteger         RecCartridgeState;
@property                         NSInteger         RecCurrentCartridge;

@property                         NSInteger         SlpLineChars;
@property (strong, readonly)      NSString*         SlpLineCharsList;
@property                         NSInteger         SlpLineHeight;
@property                         NSInteger         SlpLineSpacing;
@property (readonly)              NSInteger         SlpLineWidth;
@property                         BOOL              SlpLetterQuality;
@property (readonly)              BOOL              SlpEmpty;
@property (readonly)              BOOL              SlpNearEnd;
@property (readonly)              NSInteger         SlpSidewaysMaxLines;
@property (readonly)              NSInteger         SlpSidewaysMaxChars;
@property (readonly)              NSInteger         SlpLinesToPaperCut;
@property (strong, readonly)      NSString*         SlpBarCodeRotationList;
@property (strong, readonly)      NSString*         SlpBitmapRotationList;
@property (readonly)              NSInteger         SlpCartridgeState;
@property                         NSInteger         SlpCurrentCartridge;



////////////////////////////////////////////////////////////////////////////
//  -- Start --
//  규약 안에 있는 함수 선언  Start.
//  Define to Tha variables in UPOS Protocol 1.13

-(NSInteger) beginInsertion : (NSInteger) timeout;    // 미구현

-(NSInteger) beginRemoval : (NSInteger) timeout;      // 미구현

-(NSInteger) endInsertion : (NSInteger) timeout;      // 미구현

-(NSInteger) endRemoval : (NSInteger) timeout;        // 미구현

-(NSInteger) cutPaper : (NSInteger)percentage;

-(NSInteger) markFeed : (NSInteger)type;

-(NSInteger) printBarcode : (NSInteger) station
                data : (NSString*)data
           symbology : (NSInteger) symbology
              height : (NSInteger) height
               width : (NSInteger) width
           alignment : (NSInteger) alignment
         textPostion : (NSInteger) textPosition;

-(NSInteger) printBitmap : (NSInteger) station
                fileName : (NSString*) fileName
                   width : (NSInteger) width
               alignment : (NSInteger) alignment;

-(NSInteger) printBitmap : (NSInteger) station
                fileName : (NSString*) fileName
                   width : (NSInteger) width
               alignment : (NSInteger) alignment
              brightness : (NSInteger) brightness;

-(NSInteger) printBitmap : (NSInteger) station
                   image : (UIImage*) image
                   width : (NSInteger) width
               alignment : (NSInteger) alignment;

-(NSInteger) printBitmap : (NSInteger) station
                   image : (UIImage*) image
                   width : (NSInteger) width
               alignment : (NSInteger) alignment
              brightness : (NSInteger) brightness;


-(NSInteger) printBitmap : (NSInteger) station
                   image : (UIImage*) image
                   width : (NSInteger) width
               alignment : (NSInteger) alignment
              brightness : (NSInteger) brightness
         imageCorrection : (NSInteger) imageCorrection;

-(NSInteger) printPDF : (NSInteger) station
             fileName : (NSString*) fileName
                width : (NSInteger) width
            alignment : (NSInteger) alignment
                 page : (NSInteger) page
           brightness : (NSInteger) brightness
      imageCorrection : (NSInteger) imageCorrection;

-(NSInteger) printPDF : (NSInteger) station
             fileName : (NSString*) fileName
                width : (NSInteger) width
            alignment : (NSInteger) alignment
                 page : (NSInteger) page
           brightness : (NSInteger) brightness;

-(NSInteger) printImmediate : (NSInteger)station
                  data : (NSString*)data;

-(NSInteger) setTextEncoding : (NSStringEncoding)textEncoding;

-(NSInteger) printNormal : (NSInteger)station
               data : (NSString*)data;

-(NSInteger) printTwoNormal : (NSInteger)station
                 data1 : (NSString*)data1
                 data2 : (NSString*)data2;

-(NSInteger) rotatePrint : (NSInteger)station
           rotation : (NSInteger)rotation;

-(NSInteger) setBitmap : (NSInteger) bitmapNumber
          station : (NSInteger) station
         fileName : (NSString*) fileName
            width : (NSInteger) width
        alignment : (NSInteger) alignment;

-(NSInteger) setLogo : (NSInteger) location
           data : (NSString*) data;


-(NSInteger) printRawData : (NSInteger) station
                     data : (NSData*) data;

-(NSInteger) printPDF : (NSInteger) station
             fileName : (NSString*) fileName
                 page : (NSInteger) page;

-(NSInteger) transactionPrint : (NSInteger)station
                 control : (NSInteger)control;

-(NSInteger) validateData : (NSInteger) station
                data : (NSString*) data;


//////////////////////////////////////////////////////////////////////////////////////////
-(BOOL) _private_GetPrinterID;
//////////////////////////////////////////////////////////////////////////////////////////


//-(void)	DoPageModeArea:(NSString* sArea);
//-(void)	DoPageModePrintArea(NSString* sArea);
//-(void)	DoPageModeHorizontalPosition(NSInteger Number);
//-(void)	DoPageModeStation(NSInteger Number);
//-(void)	DoPageModeVerticalPosition(NSInteger Number);
//-(void)	DoPageModePrintDirection(NSInteger Number);

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






























