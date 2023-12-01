/* 
 * File:   led.h
 * Author: Hobvv
 *
 * Created on September 11, 2023, 8:43 PM
 */

#ifndef LED_H
#define	LED_H

/*Section : Includes*/
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

#include "led_cfg.h"

/*Section : Macros declaration*/

/*Section : Macros Function Declaration*/

/*Section : DataTypes Declaration*/
typedef enum 
{
    LED_OFF = 0,
    LED_ON
}led_status;

typedef struct 
{
    uint8 port_name  :3;
    uint8 pin        :3;
    uint8 led_status :1;
    uint8 reserved   :1;
}led_t;

/*Section : Functions Declaration*/
Std_ReturnType led_intialize(const led_t* led);
Std_ReturnType led_turn_on(const led_t* led);
Std_ReturnType led_turn_off(const led_t* led);
Std_ReturnType led_toggle(const led_t* led);


#endif	/* LED_H */

