/* 
 * File:   application.h
 * Author: Hobvv
 *
 * Created on September 11, 2023, 8:42 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

/*Section : Includes*/
#include "ECU_Layer/ecu_layer_init.h"
/*Section : Macros declaration*/
#define _XTAL_FREQ 8000000UL

/*Section : Macros Function Declaration*/

/*Section : DataTypes Declaration*/
extern keypad_t keypad1;
extern led_t on_off_led;
extern button_t on_off_btn;

extern keypad_t keypad1;
extern led_t led1;
extern led_t led2;
extern led_t led3;
extern led_t led4;
extern led_t led5;
extern led_t led6;
extern led_t led7;
extern led_t led8;
/*Section : Functions Declaration*/
void application_intialize(void);



#endif	/* APPLICATION_H */

