#ifndef WIN_DATA_TYPES_H
#define WIN_DATA_TYPES_H

#ifndef __windows__
typedef unsigned int DWORD;
typedef wchar_t WCHAR;
//typedef unsigned int UINT32;
typedef unsigned char UINT8;
typedef unsigned char BYTE;
typedef unsigned int    BOOL;
typedef unsigned char * LPBYTE;
typedef unsigned long LRESULT;
typedef unsigned long WPARAM;
typedef unsigned long LPARAM ;
typedef unsigned short USHORT;
typedef void * HANDLE;
typedef unsigned int wiced_bool_t;
typedef unsigned int UINT_PTR;
//typedef int INT32;
typedef unsigned short UINT16;
typedef unsigned int    BOOL32;

//#ifndef __APPLE__
#if !defined __APPLE__ && !defined __windows__
typedef unsigned long int uint64_t;
#endif
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
#define FALSE   0
#define TRUE   1
#else
#include "windows.h"
#endif
#endif // WIN_DATA_TYPES_H
