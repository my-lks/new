
#include "../include/ehome.h"

void leds_operations(int cmd)
{
    switch(cmd)
    {
        case LED_BEDROOM_ON:
            leds(0, 0); 
            break;
        case LED_BEDROOM_OFF:
            leds(0,1);
            break;
        case LED_SALOON_ON:
            leds(1, 0); 
            break;
        case LED_SALOON_OFF:
            leds(1,1);
            break;
        case LED_KITCHEN_ON:
            leds(2, 0); 
            break;
        case LED_KITCHEN_OFF:
            leds(2,1);
            break;
        case LED_RESTROOM_ON:
            leds(3, 0); 
            break;
        case LED_RESTROOM_OFF:
            leds(3,1);
            break;
        default:
            break;
    }
}
