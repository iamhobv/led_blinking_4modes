#include "ecu_layer_init.h"



led_t on_off_led={
.port_name=PORTB_INDEX,
.pin=PIN1,
.led_status=GPIO_LOGIC_LOW,
};

button_t on_off_btn={
.button_pin.port=PORTB_INDEX,
.button_pin.pin=PIN0,
.button_pin.direction=GPIO_DIRECTION_INPUT,
.button_pin.logic=GPIO_LOGIC_LOW,
.button_active=BUTTON_ACTIVE_HIGH,
.button_state=BUTTON_RELEASED 
};



led_t led1={
.port_name=PORTC_INDEX,
.pin=PIN0,
.led_status=GPIO_LOGIC_LOW,
};

led_t led2={
.port_name=PORTC_INDEX,
.pin=PIN1,
.led_status=GPIO_LOGIC_LOW,
};

led_t led3={
.port_name=PORTC_INDEX,
.pin=PIN2,
.led_status=GPIO_LOGIC_LOW,
};

led_t led4={
.port_name=PORTC_INDEX,
.pin=PIN3,
.led_status=GPIO_LOGIC_LOW,
};

led_t led5={
.port_name=PORTC_INDEX,
.pin=PIN4,
.led_status=GPIO_LOGIC_LOW,
};

led_t led6={
.port_name=PORTC_INDEX,
.pin=PIN5,
.led_status=GPIO_LOGIC_LOW,
};

led_t led7={
.port_name=PORTC_INDEX,
.pin=PIN6,
.led_status=GPIO_LOGIC_LOW,
};

led_t led8={
.port_name=PORTC_INDEX,
.pin=PIN7,
.led_status=GPIO_LOGIC_LOW,
};




keypad_t keypad1={
.keypad_row_pins[0].port=PORTD_INDEX,
.keypad_row_pins[0].direction=GPIO_DIRECTION_OUTPUT,
.keypad_row_pins[0].pin=PIN0,
.keypad_row_pins[0].logic=GPIO_LOGIC_LOW,

.keypad_row_pins[1].port=PORTD_INDEX,
.keypad_row_pins[1].direction=GPIO_DIRECTION_OUTPUT,
.keypad_row_pins[1].pin=PIN1,
.keypad_row_pins[1].logic=GPIO_LOGIC_LOW,

.keypad_row_pins[2].port=PORTD_INDEX,
.keypad_row_pins[2].direction=GPIO_DIRECTION_OUTPUT,
.keypad_row_pins[2].pin=PIN2,
.keypad_row_pins[2].logic=GPIO_LOGIC_LOW,

.keypad_row_pins[3].port=PORTD_INDEX,
.keypad_row_pins[3].direction=GPIO_DIRECTION_OUTPUT,
.keypad_row_pins[3].pin=PIN3,
.keypad_row_pins[3].logic=GPIO_LOGIC_LOW,

//------------------------------------------------------------------------------

.keypad_column_pins[0].port=PORTD_INDEX,
.keypad_column_pins[0].direction=GPIO_DIRECTION_INPUT,
.keypad_column_pins[0].pin=PIN4,
.keypad_column_pins[0].logic=GPIO_LOGIC_LOW,

.keypad_column_pins[1].port=PORTD_INDEX,
.keypad_column_pins[1].direction=GPIO_DIRECTION_INPUT,
.keypad_column_pins[1].pin=PIN5,
.keypad_column_pins[1].logic=GPIO_LOGIC_LOW,

.keypad_column_pins[2].port=PORTD_INDEX,
.keypad_column_pins[2].direction=GPIO_DIRECTION_INPUT,
.keypad_column_pins[2].pin=PIN6,
.keypad_column_pins[2].logic=GPIO_LOGIC_LOW,

.keypad_column_pins[3].port=PORTD_INDEX,
.keypad_column_pins[3].direction=GPIO_DIRECTION_INPUT,
.keypad_column_pins[3].pin=PIN7,
.keypad_column_pins[3].logic=GPIO_LOGIC_LOW,
};



void ecu_layer_intialize(void) {
    Std_ReturnType ret = E_NOT_OK;
 
    ret= led_intialize(&on_off_led);
    
    ret= button_initialize(&on_off_btn);
    
    ret = keypad_initialize(&keypad1);
    
   ret= led_intialize(&led1);
    ret= led_intialize(&led2);
    ret= led_intialize(&led3);
    ret= led_intialize(&led4);
    ret= led_intialize(&led5);
    ret= led_intialize(&led6);
    ret= led_intialize(&led7);
    ret= led_intialize(&led8);
    
    
    
    
   
}
