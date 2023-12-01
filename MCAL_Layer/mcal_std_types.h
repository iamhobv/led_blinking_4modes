/* 
 * File:   mcal_std_types.h
 * Author: Hobvv
 *
 * Created on September 11, 2023, 8:46 PM
 */

#ifndef MCAL_STD_TYPES_H
#define	MCAL_STD_TYPES_H
/*Section : Includes*/
#include "compiler.h"
#include "std_libarires.h"
//#include <htc.h>
/*Section : Macros declaration*/

#define STD_OFF         0x00
#define STD_ON          0x01

#define STD_LOW         0x00
#define STD_HIGH        0x01

#define STD_IDLE        0x00
#define STD_ACTIVE      0x01

#define E_OK            (Std_ReturnType)0x01
#define E_NOT_OK        (Std_ReturnType)0x00


#define ZERO_INITIALIZE 0
/*Section : Macros Function Declaration*/

/*Section : DataTypes Declaration*/
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;

typedef uint8 Std_ReturnType;

/*Section : Functions Declaration*/



#endif	/* MCAL_STD_TYPES_H */

