/* 
 * File:   keypad.h
 * Author: Hobvv
 *
 * Created on October 31, 2023, 8:52 PM
 */

#ifndef KEYPAD_H
#define	KEYPAD_H

 /*Section : Includes*/
#include "../../MCAL_Layer/GPIO/hal_gpio.h"
#include "keypad_cfg.h"
/*Section : Macros declaration*/
#define KEYPAD_ROW     4
#define KEYPAD_COLUMN  4
#define _XTAL_FREQ 8000000UL
  
/*Section : Macros Function Declaration*/

/*Section : DataTypes Declaration*/

typedef struct { 
    pin_config_t keypad_row_pins[KEYPAD_ROW];
    pin_config_t keypad_column_pins[KEYPAD_COLUMN];
}keypad_t;
/*Section : Functions Declaration*/

Std_ReturnType keypad_initialize(const keypad_t* keypad); 
Std_ReturnType keypad_get_value(const keypad_t* keypad, uint8* value);
#endif	/* KEYPAD_H */

