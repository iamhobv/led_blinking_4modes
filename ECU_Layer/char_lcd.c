#include "char_lcs/char_lcd.h"


Std_ReturnType lcd_4bit_initialize(const chr_lcd_4bit_t* lcd )
{
Std_ReturnType ret = E_OK;
uint8 pins_counter = ZERO_INITIALIZE;
    if (NULL == lcd) {
        ret = E_NOT_OK;
       
    } else {
        ret = gpio_pin_initialize(&(lcd->lcd_rs));
        ret = gpio_pin_initialize(&(lcd->lcd_en));
        
        for(pins_counter = 0;pins_counter<4;pins_counter++)
        {
            
            ret = gpio_pin_initialize(&(lcd->lcd_data[pins_counter]));
        }
 

    }
    return ret;



}
Std_ReturnType lcd_4bit_send_command(const chr_lcd_4bit_t* lcd , uint8 command){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_4bit_send_char_data(const chr_lcd_4bit_t* lcd , uint8 data){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_4bit_send_char_data_pos(const chr_lcd_4bit_t* lcd , uint8 data , uint8 row, uint8 column){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_4bit_send_string(const chr_lcd_4bit_t* lcd , uint8 *str){

Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;

}
Std_ReturnType lcd_4bit_send_string_pos(const chr_lcd_4bit_t* lcd , uint8 row , uint8 column, uint8 *str){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_4bit_send_custome_char(const chr_lcd_4bit_t* lcd ,uint8 row ,
        uint8 column,const uint8 cus_char[],uint8 mem_pos){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}

Std_ReturnType lcd_8bit_initialize(const chr_lcd_8bit_t* lcd ){
Std_ReturnType ret = E_OK;
    uint8 pins_counter = ZERO_INITIALIZE;
    if (NULL == lcd) {
        ret = E_NOT_OK;
       
    } else {
        ret = gpio_pin_initialize(&(lcd->lcd_rs));
        ret = gpio_pin_initialize(&(lcd->lcd_en));
        
        for(pins_counter = 0;pins_counter<8;pins_counter++)
        {
            
            ret = gpio_pin_initialize(&(lcd->lcd_data[pins_counter]));
        }
 

    }
    return ret;



}
Std_ReturnType lcd_8bit_send_command(const chr_lcd_8bit_t* lcd , uint8 command){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_8bit_send_char_data(const chr_lcd_8bit_t* lcd , uint8 data){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_8bit_send_char_data_pos(const chr_lcd_8bit_t* lcd , uint8 data , uint8 row, uint8 column){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_8bit_send_string(const chr_lcd_8bit_t* lcd , uint8 *str){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}
Std_ReturnType lcd_8bit_send_string_pos(const chr_lcd_8bit_t* lcd , uint8 row , uint8 column, uint8 *str){

Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;

}
Std_ReturnType lcd_8bit_send_custome_char(const chr_lcd_8bit_t* lcd ,uint8 row ,
        uint8 column,const uint8 cus_char[],uint8 mem_pos){
Std_ReturnType ret = E_OK;
    if (NULL == lcd) {
        ret = E_NOT_OK;
    } else {
        
    }
    return ret;


}

void convert_byte_to_string(uint8 value ,uint8 *str){


}
void convert_short_to_string(uint16 value ,uint8 *str){


}
void convert_int_to_string(uint32 value ,uint8 *str){


}
