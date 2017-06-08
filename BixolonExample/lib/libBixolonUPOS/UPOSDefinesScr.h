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


#if !defined(UPOS_DEFINES_SCR)
#define      UPOS_DEFINES_SCR

#include "UPOSDefines.h"

/////////////////////////////////////////////////////////////////////
// "CapInterfaceMode" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_CAP_INTERFACE_MODE) {
    SC_CMODE_TRANS       =   1,  // Simple Transaction Command and Data Mode.
    SC_CMODE_BLOCK       =   2,  // Block Data Mode.
    SC_CMODE_APDU        =   4,  // Same as Block Data Mode except APDU Standard Commands are used.
    SC_CMODE_XML         =   8  // XML Block Data Mode.
};




/////////////////////////////////////////////////////////////////////
// "CapIsoEmvMode" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_CAP_ISO_EMV_MODE) {
    SC_CMODE_ISO         =   1,  // APDU messaging format conforms to the ISO standard.
    SC_CMODE_EMV         =   2  // APDU messaging format conforms to the EMV standard.
};


/////////////////////////////////////////////////////////////////////
// "CapTransmissionProtocol" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_CAP_TRANSMISSION_PROTOCOL) {
    SC_CTRANS_PROTOCOL_T0=   1,  // Asynchronous, Half Duplex, Character, Transmission Protocol Mode.
    SC_CTRANS_PROTOCOL_T1=   2  // Asynchronous, Half Duplex, Block Transmission Protocol Mode.
};



/////////////////////////////////////////////////////////////////////
// "InterfaceMode" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_INTERFACE_MODE) {
    SC_MODE_TRANS        =   1,  // Simple Transaction Command and Data Mode.
    SC_MODE_BLOCK        =   2,  // Block Data Mode.
    SC_MODE_APDU         =   4,  // Same as Block Data Mode except APDU Standard Defines the Commands and data.
    SC_MODE_XML          =   8  // XML Block Data Mode.
};

/////////////////////////////////////////////////////////////////////
// "IsoEmvMode" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_ISO_EMV_MODE) {
    SC_MODE_ISO          =   1,  // APDU messaging format currently in use conforms to the ISO standard.
    SC_MODE_EMV          =   2  // APDU messaging format currently in use conforms to the EMV standard.
};

/////////////////////////////////////////////////////////////////////
// "TransmissionProtocol" Property Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_TRANSMISSION_PROTOCOL) {
    SC_TRANS_PROTOCOL_T0 =   1,  // Asynchronous, Half Duplex, Character, Transmission Protocol Mode.
    SC_TRANS_PROTOCOL_T1 =   2  // Asynchronous, Half Duplex, Block Transmission Protocol Mode.
};


/////////////////////////////////////////////////////////////////////
// "ReadData" Method: "Action" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_READ_DATA_ACTION) {
    SC_READ_DATA             =  11,
    SC_READ_PROGRAM          =  12,
    SC_EXECUTE_AND_READ_DATA =  13,
    SC_XML_READ_BLOCK_DATA   =  14
};

/////////////////////////////////////////////////////////////////////
// "WriteData" Method: "Action" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_WRITE_DATA_ACTION) {
    
    SC_STORE_DATA        =  21,
    SC_STORE_PROGRAM     =  22,
    SC_EXECUTE_DATA      =  23,
    SC_XML_BLOCK_DATA    =  24,
    SC_SECURITY_FUSE     =  25,
    SC_RESET             =  26
};

/////////////////////////////////////////////////////////////////////
// "StatusUpdateEvent" Event: "Data" Parameter Constant
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_STATUS_UPDATE_EVENT) {
    
    SC_SUE_NO_CARD       =   1,  // No card detected in the SCR/W Device.
    SC_SUE_CARD_PRESENT  =   2  // There is a card in the device.
};

/////////////////////////////////////////////////////////////////////
// "ErrorEvent" Event: "ResultCodeExtended" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_ERROR_EVENT) {
    
    UPOS_ESC_READ        = 201,  // There was a read error.
    UPOS_ESC_WRITE       = 202,  // There was a write error.
    UPOS_ESC_TORN        = 203,  // The smart card was prematurely removed from the SCR/W unexpectedly. Note: CapCardErrorDetection capability must be true before this can be set.
    UPOS_ESC_NO_CARD     = 204  // There is no card detected in the SCR/W but a card was expected.
};


/////////////////////////////////////////////////////////////////////
// "Event: "_LastCardStatus" Parameter Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_SCR_RESPONSE) {
    _UPOS_SCR_RESPONSE_SUCCESSFUL                       = 0x00,
    _UPOS_SCR_RESPONSE_WRONG_COMMAND_LENGTH             = 0x01,
    _UPOS_SCR_RESPONSE_EXCESSIVE_CURRENT_POWEROFF       = 0x02,
    _UPOS_SCR_RESPONSE_DEFECTIVE_VOLTAGE_POWEROFF       = 0x03,
    _UPOS_SCR_RESPONSE_INVALID_07                       = 0x07,
    _UPOS_SCR_RESPONSE_INVALID_08                       = 0x08,
    _UPOS_SCR_RESPONSE_INVALID_09                       = 0x09,
    _UPOS_SCR_RESPONSE_INVALID_0A                       = 0x0A,
    _UPOS_SCR_RESPONSE_INVALID_15                       = 0x15,
    _UPOS_SCR_RESPONSE_SHORT_CIRCUITING                 = 0xA2,
    _UPOS_SCR_RESPONSE_ATR_TOO_LONG                     = 0xA3, //  the number of bytes is greater than 33
    _UPOS_SCR_RESPONSE_CARD_IS_TOO_LONG                 = 0xB0, // the reader is in EMV mode and the T=1 message sent by the card is too long.  The buffer is limited to 254 bytes under the T=1 protocol.
    _UPOS_SCR_RESPONSE_PROTOCOL_ERROR_IN_EMV            = 0xBB,
    _UPOS_SCR_RESPONSE_PROTOCOL_ERROR_DURING_T1EXCHANGE = 0xBD,
    _UPOS_SCR_RESPONSE_APDU_LENGTH_WRONG                = 0xBE,
    _UPOS_SCR_RESPONSE_INVALID_TCK_OF_ATR               = 0xF7,
    _UPOS_SCR_RESPONSE_INVALID_TS_OF_ATR                = 0xF8,
    _UPOS_SCR_RESPONSE_PARITY_ERROR                     = 0xFD,
    _UPOS_SCR_RESPONSE_CARD_IS_NOT_PRESENT_OR_MUTE      = 0xFE,
    _UPOS_SCR_RESPONSE_NO_USED                          = 0xFF,
    
};
#endif                  // !defined(UPOS_DEFINES_SCR)























