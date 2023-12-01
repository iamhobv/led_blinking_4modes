/* 
 * File:   application.c
 * Author: Hobvv
 *
 * Created on September 11, 2023, 8:48 PM
 */


#include "application.h"

Std_ReturnType ret = E_NOT_OK;

   button_state_t on_off_btn_status=BUTTON_RELEASED;
   uint8 btn_flag =0;
   uint8 keypad_value;

int main() {
    application_intialize();
     
    while (1) {
        ret = button_read_state(&on_off_btn,&on_off_btn_status);
        ret = keypad_get_value(&keypad1, &keypad_value);
        
        if((BUTTON_PRESSED==on_off_btn_status) && (0==btn_flag))
        {
            ret = led_turn_on(&on_off_led);
            btn_flag = 1;
            
        }
        
        else if((BUTTON_PRESSED==on_off_btn_status) && (1==btn_flag)){
              ret = led_turn_off(&on_off_led);
                ret = led_turn_off(&led1);
                 ret = led_turn_off(&led2);
                 ret = led_turn_off(&led3);
                 ret = led_turn_off(&led4);
                 ret = led_turn_off(&led5);
                 ret = led_turn_off(&led6);
                 ret = led_turn_off(&led7);
                 ret = led_turn_off(&led8);
              btn_flag = 0;
              keypad_value='0';
        }
        
        if((1==btn_flag)&&('0' == keypad_value)){
            ret = led_turn_off(&led1);
            ret = led_turn_off(&led2);
                 ret = led_turn_off(&led3);
                 ret = led_turn_off(&led4);
                 ret = led_turn_off(&led5);
                 ret = led_turn_off(&led6);
                 ret = led_turn_off(&led7);
                 ret = led_turn_off(&led8);
        }
        else if((1==btn_flag)&&('1' == keypad_value)){
        
            
            
                 ret = led_turn_on(&led1);
                 ret = led_turn_on(&led2);
                 ret = led_turn_on(&led3);
                 ret = led_turn_on(&led4);
                 ret = led_turn_on(&led5);
                 ret = led_turn_on(&led6);
                 ret = led_turn_on(&led7);
                 ret = led_turn_on(&led8);
        }
        else if ((1==btn_flag)&&('2' == keypad_value))
                 {
                 ret = led_turn_on(&led1);
                 ret = led_turn_off(&led2);
                 ret = led_turn_on(&led3);
                 ret = led_turn_off(&led4);
                 ret = led_turn_on(&led5);
                 ret = led_turn_off(&led6);
                 ret = led_turn_on(&led7);
                 ret = led_turn_off(&led8);
             }
        else if ((1==btn_flag)&&('3' == keypad_value)){
            
            ret = led_turn_on(&led1);
            __delay_ms(200);
            ret = led_turn_off(&led1);
            ret = led_turn_on(&led2);
            __delay_ms(200);
            ret = led_turn_off(&led2);
            ret = led_turn_on(&led3);
            __delay_ms(200);
            ret = led_turn_off(&led3);
            ret = led_turn_on(&led4);
            __delay_ms(200);
            ret = led_turn_off(&led4);
            ret = led_turn_on(&led5);
            __delay_ms(200);
            ret = led_turn_off(&led5);
            ret = led_turn_on(&led6);
            __delay_ms(200);
            ret = led_turn_off(&led6);
            ret = led_turn_on(&led7);
            __delay_ms(200);
            ret = led_turn_off(&led7);
            ret = led_turn_on(&led8);
            __delay_ms(200);
            ret = led_turn_off(&led8);
            
        }
         else if ((1==btn_flag)&&('4' == keypad_value)){
          ret = led_turn_on(&led1);
           ret = led_turn_on(&led8);
           __delay_ms(200);
           ret = led_turn_off(&led8);
           ret = led_turn_off(&led1);
           ret = led_turn_on(&led2);
           ret = led_turn_on(&led7);
           __delay_ms(200);
           ret = led_turn_off(&led2);
           ret = led_turn_off(&led7);
           ret = led_turn_on(&led3);
           ret = led_turn_on(&led6);
           __delay_ms(200);
           ret = led_turn_off(&led3);
           ret = led_turn_off(&led6);
           ret = led_turn_on(&led4);
           ret = led_turn_on(&led5);
            __delay_ms(200);
            ret = led_turn_off(&led4);
           ret = led_turn_off(&led5);
           ret = led_turn_on(&led3);
           ret = led_turn_on(&led6);
           __delay_ms(200);
            ret = led_turn_off(&led3);
           ret = led_turn_off(&led6);
           ret = led_turn_on(&led2);
           ret = led_turn_on(&led7);
            __delay_ms(200);
            ret = led_turn_off(&led2);
           ret = led_turn_off(&led7);
          
             
         }
            }

    return (EXIT_SUCCESS);
}

void application_intialize(void) {
    Std_ReturnType ret = E_NOT_OK;
    ecu_layer_intialize();
  
}