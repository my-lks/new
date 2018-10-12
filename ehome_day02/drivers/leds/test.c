

#include <stdio.h>
#include <fcntl.h>

#define LED_ON  0x100001
#define LED_OFF 0x100002

int main(void)
{
    int i  = 0;
    int fd = open("/dev/leds", O_RDONLY);
    if(fd < 0)
    {
        perror("open failed!\n");
        return -1;
    }
    printf("open successed!\n");

    for(; i<4; i++)
    {
        ioctl(fd, LED_ON, &i);
        sleep(1);
    }

    for(i=0; i<4; i++)
    {
        ioctl(fd, LED_ON, &i);
        sleep(1);
    }
    close(fd);
    return 0;
}
