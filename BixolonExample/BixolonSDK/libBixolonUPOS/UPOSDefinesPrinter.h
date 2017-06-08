/////////////////////////////////////////////////////////////////////
//
// UPOSDefines.h
//
//   General header file for iOS UPOS Applications.
//
// Modification history
// ------------------------------------------------------------------
// 2015-10-27 initial release                                   sbson
/////////////////////////////////////////////////////////////////////


#if !defined(UPOS_DEFINES_PRINTER)
#define      UPOS_DEFINES_PRINTER

#include "UPOSDefines.h"
/////////////////////////////////////////////////////////////////////
// Printer Station Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_STATION) {
    PTR_S_JOURNAL        = 1,
    PTR_S_RECEIPT        = 2,
    PTR_S_SLIP           = 4,
    
    PTR_S_JOURNAL_RECEIPT    = 0x0003,
    PTR_S_JOURNAL_SLIP       = 0x0005,
    PTR_S_RECEIPT_SLIP       = 0x0006,
    
    PTR_TWO_RECEIPT_JOURNAL  = 0x8003,
    PTR_TWO_SLIP_JOURNAL     = 0x8005,
    PTR_TWO_SLIP_RECEIPT     = 0x8006
};

/////////////////////////////////////////////////////////////////////
// "CharacterSet" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_CHARACTER_SET) {
    PTR_CC_ALPHA        =   1,
    PTR_CC_KANA         =  10,
    PTR_CC_KANJI        =  11,
    PTR_CC_ASCII        = 998,
    PTR_CC_UNICODE      = 997,
    PTR_CS_ANSI          = 999,
    PTR_CS_WINDOWS       = PTR_CS_ANSI
};


/////////////////////////////////////////////////////////////////////
// "ErrorLevel" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_ERROR_LEVEL) {
    PTR_EL_NONE          = 1,
    PTR_EL_RECOVERABLE   = 2,
    PTR_EL_FATAL         = 3
};


/////////////////////////////////////////////////////////////////////
// "MapMode" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_MAP_MODE) {
    PTR_MM_DOTS          = 1,
    PTR_MM_TWIPS         = 2,
    PTR_MM_ENGLISH       = 3,
    PTR_MM_METRIC        = 4
};


/////////////////////////////////////////////////////////////////////
// "CapXxxColor" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_COLOR) {
    PTR_COLOR_PRIMARY      = 0x00000001,
    PTR_COLOR_CUSTOM1      = 0x00000002,
    PTR_COLOR_CUSTOM2      = 0x00000004,
    PTR_COLOR_CUSTOM3      = 0x00000008,
    PTR_COLOR_CUSTOM4      = 0x00000010,
    PTR_COLOR_CUSTOM5      = 0x00000020,
    PTR_COLOR_CUSTOM6      = 0x00000040,
    PTR_COLOR_CYAN         = 0x00000100,
    PTR_COLOR_MAGENTA      = 0x00000200,
    PTR_COLOR_YELLOW       = 0x00000400,
    PTR_COLOR_FULL         = 0x80000000
};


/////////////////////////////////////////////////////////////////////
// "CapXxxCartridgeSensor" and  "XxxCartridgeState" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_CARTRIDGE_SENSOR) {
    PTR_CART_UNKNOWN         = 0x10000000,
    PTR_CART_OK              = 0x00000000,
    PTR_CART_REMOVED         = 0x00000001,
    PTR_CART_EMPTY           = 0x00000002,
    PTR_CART_NEAREND         = 0x00000004,
    PTR_CART_CLEANING        = 0x00000008
};


/////////////////////////////////////////////////////////////////////
// "CartridgeNotify" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_CARTRIDGE_NOTIFY) {
    PTR_CN_DISABLED        = 0x00000000,
    PTR_CN_ENABLED         = 0x00000001
};


/////////////////////////////////////////////////////////////////////
// "PageModeDescriptor" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_PAGE_MODE_DESCRIPTER) {
    PTR_PM_BITMAP         = 0x00000001,
    PTR_PM_BARCODE        = 0x00000002,
    PTR_PM_BM_ROTATE      = 0x00000004,
    PTR_PM_BC_ROTATE      = 0x00000008,
    PTR_PM_OPAQUE         = 0x00000010
};


/////////////////////////////////////////////////////////////////////
// "PageModePrintDirection" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_PAGE_MODE_DIRECTION) {
    PTR_PD_LEFT_TO_RIGHT = 1,
    PTR_PD_BOTTOM_TO_TOP = 2,
    PTR_PD_RIGHT_TO_LEFT = 3,
    PTR_PD_TOP_TO_BOTTOM = 4
};


/////////////////////////////////////////////////////////////////////
// "CutPaper" Method Constant
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_CUT_PAPER_LEVEL) {
    PTR_CP_FULLCUT       = 100
};


/////////////////////////////////////////////////////////////////////
// "PageModePrint" Method: "Control" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_PAGE_MODE_PRINT) {
    PTR_PM_PAGE_MODE      = 1,
    PTR_PM_PRINT_SAVE     = 2,
    PTR_PM_NORMAL         = 3,
    PTR_PM_CANCEL         = 4
};


/////////////////////////////////////////////////////////////////////
// "PrintBarCode" Method Constants:
/////////////////////////////////////////////////////////////////////

//** "Alignment" Parameter
//     Either the distance from the left-most print column to the start
//     of the bar code, or one of the following:
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_BARCODE_ALIGNMENT) {
    PTR_BC_LEFT          = -1,
    PTR_BC_CENTER        = -2,
    PTR_BC_RIGHT         = -3
};

//** "TextPosition" Parameter
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_BARCODE_TEXT_POSITION) {
    PTR_BC_TEXT_NONE     = -11,
    PTR_BC_TEXT_ABOVE    = -12,
    PTR_BC_TEXT_BELOW    = -13
};

//** "Symbology" Parameter:
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_BARCODE_SYMBOLOGIES) {
    //    - One dimensional symbologies
    PTR_BCS_UPCA         = 101,  // Digits
    PTR_BCS_UPCE         = 102,  // Digits
    PTR_BCS_JAN8         = 103,  // = EAN 8
    PTR_BCS_EAN8         = 103,  // = JAN 8
    PTR_BCS_JAN13        = 104,  // = EAN 13
    PTR_BCS_EAN13        = 104,  // = JAN 13
    PTR_BCS_TF           = 105,  // (Discrete 2 of 5) Digits
    PTR_BCS_ITF          = 106,  // (Interleaved 2 of 5) Digits
    PTR_BCS_Codabar      = 107,  // Digits, -, $, :, /, ., +,
    //   4 start/stop characters
    //   (a, b, c, d)
    PTR_BCS_Code39       = 108,  // Alpha, Digits, Space, -, .,
    //   $, /, +, %, start/stop (*)
    // Also has Full ASCII feature
    PTR_BCS_Code93       = 109,  // Same characters as Code 39
    PTR_BCS_Code128      = 110,  // 128 data characters
    
    //    - One dimensional symbologies
    PTR_BCS_UPCA_S       = 111,  // UPC-A with supplemental
    //   barcode
    PTR_BCS_UPCE_S       = 112,  // UPC-E with supplemental
    //   barcode
    PTR_BCS_UPCD1        = 113,  // UPC-D1
    PTR_BCS_UPCD2        = 114,  // UPC-D2
    PTR_BCS_UPCD3        = 115,  // UPC-D3
    PTR_BCS_UPCD4        = 116,  // UPC-D4
    PTR_BCS_UPCD5        = 117,  // UPC-D5
    PTR_BCS_EAN8_S       = 118,  // EAN 8 with supplemental
    //   barcode
    PTR_BCS_EAN13_S      = 119,  // EAN 13 with supplemental
    //   barcode
    PTR_BCS_EAN128       = 120,  // EAN 128
    PTR_BCS_OCRA         = 121,  // OCR "A"
    PTR_BCS_OCRB         = 122,  // OCR "B"
    
    //    - One dimensional symbologies
    PTR_BCS_Code128_Parsed=123,  // Code 128 with parsing
    //        The following RSS constants deprecated in 1.12.
    //        Instead use the GS1DATABAR constants below.
    PTR_BCS_RSS14        = 131,  // Reduced Space Symbology - 14 digit GTIN
    PTR_BCS_RSS_EXPANDED = 132,  // RSS - 14 digit GTIN plus additional fields
    
    //    - One dimensional symbologies
    PTR_BCS_GS1DATABAR    =131,  // GS1 DataBar Omnidirectional
    PTR_BCS_GS1DATABAR_E  =132,  // GS1 DataBar Expanded
    PTR_BCS_GS1DATABAR_S  =133,  // GS1 DataBar Stacked Omnidirectional
    PTR_BCS_GS1DATABAR_E_S=134,  // GS1 DataBar Expanded Stacked
    
    //    - Two dimensional symbologies
    PTR_BCS_PDF417       = 201,
    PTR_BCS_MAXICODE     = 202,
    
    //    - Two dimensional symbologies
    PTR_BCS_DATAMATRIX   = 203,  // Data Matrix
    PTR_BCS_QRCODE       = 204,  // QR Code
    PTR_BCS_UQRCODE      = 205,  // Micro QR Code
    PTR_BCS_AZTEC        = 206,  // Aztec
    PTR_BCS_UPDF417      = 207,  // Micro PDF 417
    
    //    - Start of Printer-Specific bar code symbologies
    PTR_BCS_OTHER        = 501
};


/////////////////////////////////////////////////////////////////////
// "PrintBitmap" and "PrintMemoryBitmap" Method Constants:
/////////////////////////////////////////////////////////////////////

//** "Width" Parameter
//     Either bitmap width or:
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_BITMAP_WIDTH) {
    PTR_BM_ASIS          = -11,  // One pixel per printer dot
};

//** "Alignment" Parameter
//     Either the distance from the left-most print column to the start
//     of the bitmap, or one of the following:
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_BITMAP_ALIGNMENT) {
    PTR_BM_LEFT          = -1,
    PTR_BM_CENTER        = -2,
    PTR_BM_RIGHT         = -3
};



/////////////////////////////////////////////////////////////////////
// "RotatePrint" Method: "Rotation" Parameter Constants
// "RotateSpecial" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_ROTATE) {
    PTR_RP_NORMAL        = 0x0001,
    PTR_RP_RIGHT90       = 0x0101,
    PTR_RP_LEFT90        = 0x0102,
    PTR_RP_ROTATE180     = 0x0103,
    
    // For "RotatePrint", one or both of the following values may be
    // ORed with one of the above values.
    PTR_RP_BARCODE       = 0x1000,
    PTR_RP_BITMAP        = 0x2000,
};


/////////////////////////////////////////////////////////////////////
// "SetLogo" Method: "Location" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_LOGO) {
    PTR_L_TOP            = 1,
    PTR_L_BOTTOM         = 2
};


/////////////////////////////////////////////////////////////////////
// "TransactionPrint" Method: "Control" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_TRANSACTION) {
    PTR_TP_TRANSACTION   = 11,
    PTR_TP_NORMAL        = 12
};


/////////////////////////////////////////////////////////////////////
// "MarkFeed" Method: "Type" Parameter Constants
// "CapRecMarkFeed" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_MARK_FEED_TYPE) {
    PTR_MF_TO_TAKEUP     = 1,
    PTR_MF_TO_CUTTER     = 2,
    PTR_MF_TO_CURRENT_TOF= 4,
    PTR_MF_TO_NEXT_TOF   = 8
};


/////////////////////////////////////////////////////////////////////
// "ChangePrintSide" Method: "Side" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_SIDE) {
    PTR_PS_UNKNOWN       = 0,
    PTR_PS_SIDE1         = 1,
    PTR_PS_SIDE2         = 2,
    PTR_PS_OPPOSITE      = 3
};


/////////////////////////////////////////////////////////////////////
// "statusUpdateEvent" Event: "Data" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_STATUS) {
    PTR_SUE_COVER_OPEN              = 11,
    PTR_SUE_COVER_OK                = 12,
    PTR_SUE_JRN_COVER_OPEN          = 60,
    PTR_SUE_JRN_COVER_OK            = 61,
    PTR_SUE_REC_COVER_OPEN          = 62,
    PTR_SUE_REC_COVER_OK            = 63,
    PTR_SUE_SLP_COVER_OPEN          = 64,
    PTR_SUE_SLP_COVER_OK            = 65,
    
    PTR_SUE_JRN_EMPTY               = 21,
    PTR_SUE_JRN_NEAREMPTY           = 22,
    PTR_SUE_JRN_PAPEROK             = 23,
    
    PTR_SUE_REC_EMPTY               = 24,
    PTR_SUE_REC_NEAREMPTY           = 25,
    PTR_SUE_REC_PAPEROK             = 26,
    
    PTR_SUE_SLP_EMPTY               = 27,
    PTR_SUE_SLP_NEAREMPTY           = 28,
    PTR_SUE_SLP_PAPEROK             = 29,
    
    PTR_SUE_JRN_CARTRIDGE_EMPTY     = 41,
    PTR_SUE_JRN_CARTRIDGE_NEAREMPTY = 42,
    PTR_SUE_JRN_HEAD_CLEANING       = 43,
    PTR_SUE_JRN_CARTRIDGE_OK        = 44,
    
    PTR_SUE_REC_CARTRIDGE_EMPTY     = 45,
    PTR_SUE_REC_CARTRIDGE_NEAREMPTY = 46,
    PTR_SUE_REC_HEAD_CLEANING       = 47,
    PTR_SUE_REC_CARTRIDGE_OK        = 48,
    
    PTR_SUE_SLP_CARTRIDGE_EMPTY     = 49,
    PTR_SUE_SLP_CARTRIDGE_NEAREMPTY = 50,
    PTR_SUE_SLP_HEAD_CLEANING       = 51,
    PTR_SUE_SLP_CARTRIDGE_OK        = 52,
    
    PTR_SUE_IDLE                    = 1001
};


/////////////////////////////////////////////////////////////////////
// "ResultCodeExtended" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_PRINTER_RESULTCODE_EXTENDED) {
    UPOS_EPTR_COVER_OPEN            = 201, // (Several)
    UPOS_EPTR_JRN_EMPTY             = 202, // (Several)
    UPOS_EPTR_REC_EMPTY             = 203, // (Several)
    UPOS_EPTR_SLP_EMPTY             = 204, // (Several)
    UPOS_EPTR_SLP_FORM              = 205, // EndRemoval
    UPOS_EPTR_TOOBIG                = 206, // PrintBitmap
    UPOS_EPTR_BADFORMAT             = 207, // PrintBitmap
    UPOS_EPTR_JRN_CARTRIDGE_REMOVED = 208, // (Several)
    UPOS_EPTR_JRN_CARTRIDGE_EMPTY   = 209, // (Several)
    UPOS_EPTR_JRN_HEAD_CLEANING     = 210, // (Several)
    UPOS_EPTR_REC_CARTRIDGE_REMOVED = 211, // (Several)
    UPOS_EPTR_REC_CARTRIDGE_EMPTY   = 212, // (Several)
    UPOS_EPTR_REC_HEAD_CLEANING     = 213, // (Several)
    UPOS_EPTR_SLP_CARTRIDGE_REMOVED = 214, // (Several)
    UPOS_EPTR_SLP_CARTRIDGE_EMPTY   = 215, // (Several)
    UPOS_EPTR_SLP_HEAD_CLEANING     = 216 // (Several)
};


/////////////////////////////////////////////////////////////////////
// "_textEncoding" Property Constants,
// "setTextEncoding" Method Constants.
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSStringEncoding, __UPOS_ENCODING_OPTIONS) {
    _UPOS_ENCODING_OPTION_ASCII          = 0x00000001,
    _UPOS_ENCODING_OPTION_KSC5601        = 0x80000422,
    _UPOS_ENCODING_OPTION_SHIFT_JIS      = 0x00000008,
    _UPOS_ENCODING_OPTION_BIG5           = 0x80000a03,
    _UPOS_ENCODING_OPTION_GB2312         = 0x80000421,
    _UPOS_ENCODING_OPTION_GB18030        = 0x80000632,
    
};





#endif                  // !defined(UPOS_DEFINES_PRINTER)
