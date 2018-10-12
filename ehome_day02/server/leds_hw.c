


#include "../include/ehome.h"

#define LED_ON  0x100001
#define LED_OFF 0x100002

int leds(int index, int cmd)
{
    int leds_fd = 0;
    char *str = NULL;

    leds_fd = open("/dev/leds", O_RDONLY);

    if(leds_fd < 0)
    {
        str = strerror(errno);
        pr_debug("open leds failed:%s\n", str);        
        return -1;
    }
    if(cmd)
        ioctl(leds_fd, LED_OFF, &index);
    else
        ioctl(leds_fd, LED_ON, &index);
    
    return 0;

}










