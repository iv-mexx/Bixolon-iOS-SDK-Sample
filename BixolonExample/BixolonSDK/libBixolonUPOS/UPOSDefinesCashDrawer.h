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


#if !defined(UPOS_DEFINES_CASHDRAWER)
#define      UPOS_DEFINES_CASHDRAWER

#include "UPOSDefines.h"

/////////////////////////////////////////////////////////////////////
// "statusUpdateEvent" Event Constants
/////////////////////////////////////////////////////////////////////
typedef NS_OPTIONS(NSUInteger, __UPOS_CASHDRAWER_STATES) {
    
    CASH_SUE_DRAWERCLOSED = 0,
     CASH_SUE_DRAWEROPEN   = 1
};

    
    
#endif                  // !defined(OPOSCASH_H)