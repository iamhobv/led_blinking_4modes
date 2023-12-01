/* 
 * File:   button.h
 * Author: Hobvv
 *
 * Created on October 1, 2023, 3:57 PM
 */

#ifndef BUTTON_H
#define	BUTTON_H

 /*Section : Includes*/
#include "button_cfg.H"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"

/*Section : Macros declaration*/

/*Section : Macros Function Declaration*/

/*Section : DataTypes Declaration*/
typedef enum{
    BUTTON_PRESSED,
    BUTTON_RELEASED        
}button_state_t;

typedef enum {
    BUTTON_ACTIVE_HIGH,
    BUTTON_ACTIVE_LOW
}button_active_t;

typedef struct {
    pin_config_t button_pin;
    button_state_t button_state;
    button_active_t button_active;
}button_t;
/*Section : Functions Declaration*/
Std_ReturnType button_initialize(const button_t *btn);
Std_ReturnType button_read_state(const button_t *btn , button_state_t *btn_state);

#endif	/* BUTTON_H */

