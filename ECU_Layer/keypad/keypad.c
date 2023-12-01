#include "keypad.h"


static const uint8 btn_values[KEYPAD_ROW][KEYPAD_COLUMN]={
                                                            {'7','8','9','/'},
                                                            {'4','5','6','*'},
                                                            {'1','2','3','-'},
                                                            {'#','0','=','+'},

                                                        };
Std_ReturnType keypad_initialize(const keypad_t* keypad)
{ 
    Std_ReturnType ret = E_OK;
    uint8 rows_counter=ZERO_INITIALIZE,columns_counter=ZERO_INITIALIZE;

  
if (NULL == keypad) {
        ret = E_NOT_OK;
    } else {
 
    for(rows_counter=ZERO_INITIALIZE;rows_counter<KEYPAD_ROW;rows_counter++)
    {
        ret= gpio_pin_initialize(&(keypad->keypad_row_pins[rows_counter]));
        
    }
    
    for(columns_counter=ZERO_INITIALIZE;columns_counter<KEYPAD_COLUMN;columns_counter++)
    {
        ret=gpio_pin_direction_initialize(&(keypad->keypad_column_pins[columns_counter]));
    }
    }

    
    return ret;
    
    
    
    
    
}


Std_ReturnType keypad_get_value(const keypad_t* keypad, uint8* value){

Std_ReturnType ret = E_OK;

uint8 rows_counter=ZERO_INITIALIZE,columns_counter=ZERO_INITIALIZE,clear_counter=ZERO_INITIALIZE;
uint8 column_value=ZERO_INITIALIZE;

    if (NULL == keypad|| NULL==value) {
        ret = E_NOT_OK;
    } else {
         for(rows_counter=ZERO_INITIALIZE;rows_counter<KEYPAD_ROW;rows_counter++)
         {
              for(clear_counter=ZERO_INITIALIZE;clear_counter<KEYPAD_ROW;clear_counter++)
              {
                  ret=gpio_pin_write_logic(&(keypad->keypad_row_pins[clear_counter]),GPIO_LOGIC_LOW);
              }
              ret=gpio_pin_write_logic(&(keypad->keypad_row_pins[rows_counter]),GPIO_LOGIC_HIGH);
              for(columns_counter=ZERO_INITIALIZE;columns_counter<KEYPAD_COLUMN;columns_counter++)
                     {
                           ret=gpio_pin_read_logic(&(keypad->keypad_column_pins[columns_counter]),&column_value);
                           if(column_value ==GPIO_LOGIC_HIGH ){
                           *value=btn_values[rows_counter][columns_counter];
                           }
                     }
         }

    }
    return ret;
    
    

}