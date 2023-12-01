#include "hal_gpio.h"

volatile uint8 *tris_reg[]={&TRISA, &TRISB, &TRISC, &TRISD, &TRISE};
volatile uint8 *lat_reg[]={&LATA , &LATB , &LATC , &LATD , &LATE};
volatile uint8 *port_reg[]={&PORTA, &PORTB, &PORTC, &PORTD, &PORTE};

/*pin interfaces*/
#if PORT_PIN_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_pin_direction_initialize(const pin_config_t *pin_config)
{
    Std_ReturnType ret =E_OK;
    if(NULL == pin_config || pin_config->pin > PORT_PIN_MAX_NUMBER-1)
    {
        ret=E_NOT_OK;
    }
    else 
{
        switch (pin_config->direction){
            case GPIO_DIRECTION_OUTPUT:
                CLEAR_BIT(*tris_reg[pin_config->port], pin_config->pin);
                break;
            case GPIO_DIRECTION_INPUT:
                SET_BIT(*tris_reg[pin_config->port], pin_config->pin);    
                break;
        }     
    }

    return ret;
}
#endif

#if PORT_PIN_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_pin_get_direction(const pin_config_t *pin_config, direction_t *direction_status)
{
    Std_ReturnType ret = E_OK;
    if(NULL ==pin_config ||NULL == direction_status || pin_config->pin>PORT_PIN_MAX_NUMBER-1)
    {
        ret = E_NOT_OK;
    }else 
    {
        *direction_status = READ_BIT(*tris_reg[pin_config->direction],pin_config->pin);
    }
    return ret; 
}
#endif

#if PORT_PIN_CONFIG == CONFIG_ENABLE

Std_ReturnType gpio_pin_write_logic(const pin_config_t *pin_config, logic_t logic)
{
    Std_ReturnType ret = E_OK;
    if (NULL == pin_config || pin_config->pin > PORT_PIN_MAX_NUMBER - 1) {
        ret = E_NOT_OK;
    } else {
        switch (logic) {
            case GPIO_LOGIC_LOW:
                CLEAR_BIT(*lat_reg[pin_config->port], pin_config->pin);
                break;
            case GPIO_LOGIC_HIGH:
                SET_BIT(*lat_reg[pin_config->port], pin_config->pin);
                break;
            default: ret = E_NOT_OK;
        };
    }

    return ret;
}
#endif

#if PORT_PIN_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_pin_read_logic(const pin_config_t *pin_config, logic_t *logic)
{
    Std_ReturnType ret = E_OK;
    if(NULL == pin_config || NULL == logic || pin_config->pin > PORT_PIN_MAX_NUMBER-1)
    {
        ret = E_NOT_OK;
    }
    else 
    {
        *logic = READ_BIT(*port_reg[pin_config->port],pin_config->pin);
    }
    return ret;
}
#endif

#if PORT_PIN_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t *pin_config)
{
    Std_ReturnType ret = E_OK;
    if(NULL == pin_config || pin_config->pin > PORT_PIN_MAX_NUMBER-1)
    {
        ret = E_NOT_OK;
    }
     else 
    {
        TOGGLE_BIT(*lat_reg[pin_config->port], pin_config->pin);
    }
    return ret;
    
}
#endif

#if PORT_PIN_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_pin_initialize(const pin_config_t *pin_config)
{
    Std_ReturnType ret = E_OK;
    if(NULL == pin_config || pin_config->pin > PORT_PIN_MAX_NUMBER-1)
    {
        ret = E_NOT_OK;
             
    }
    else {
        ret = gpio_pin_direction_initialize(pin_config);
        ret = gpio_pin_write_logic(pin_config , pin_config->logic);
    }
    return ret;
}
#endif



/*port interfaces*/

#if PORT_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_port_direction_initialize(port_index_t port,uint8 direction)
{
    Std_ReturnType ret = E_OK;
    if(port > PORT_MAX_NUMBER-1)
    {
        ret = E_NOT_OK;
    }
    else
    {
        *tris_reg[port] = direction; 
    }
    return ret;
}
#endif

#if PORT_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_port_get_direction_status(port_index_t port,uint8 *direction_status)
{ 
 Std_ReturnType ret =E_OK;
 if( NULL == direction_status ||(port >PORT_MAX_NUMBER-1 ) )
    {
        ret =E_NOT_OK;
    }
    else 
    {
     direction_status = *tris_reg[port];  
    }
    return ret;
}
#endif

#if PORT_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_port_write_logic(port_index_t port,uint8 logic)
{
    Std_ReturnType ret = E_OK;
    if (port > PORT_MAX_NUMBER - 1) {
        ret = E_NOT_OK;
    } else {
        *lat_reg[port] = logic;
    }
    return ret;
}
#endif

#if PORT_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_port_read_logic(port_index_t port,uint8 *logic)
{
    Std_ReturnType ret = E_OK;
    if (NULL == logic || (port > PORT_MAX_NUMBER - 1)) {
        ret = E_NOT_OK;
    } else {
        *logic = *lat_reg[port];
    }
    return ret;
}
#endif

#if PORT_CONFIG == CONFIG_ENABLE
Std_ReturnType gpio_port_toggle_logic(port_index_t port)
{
    Std_ReturnType ret = E_OK;
    if ((port > PORT_MAX_NUMBER - 1)) {
        ret = E_NOT_OK;
    } else {
        *lat_reg[port] ^= PORTC_MASK;
    }
    return ret;
}
#endif
