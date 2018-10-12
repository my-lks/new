

#include <linux/init.h>
#include <linux/module.h>
#include <linux/miscdevice.h>

#include <linux/gpio.h>
#include <linux/fs.h>
#include <mach/platform.h>
#include <linux/uaccess.h>

MODULE_LICENSE("GPL");

#define LED_ON  0x100001
#define LED_OFF 0x100002

struct led_desc 
{
    char *name;
    int gpio;
};

struct led_desc leds[]=
{
    {"led_bedroom", PAD_GPIO_C+12},
    {"led_saloon", PAD_GPIO_C+7},
    {"led_kitchen", PAD_GPIO_C+11},
    {"led_restroom", PAD_GPIO_B+26},
};

long leds_ioctl(struct file *file,unsigned int cmd,unsigned long arg)
{
    //1.定义内核缓冲区
    int kindex = 0;
    int ret = 0;
    int status = 0;

    //2.拷贝用户缓冲区到内核
    ret = copy_from_user(&kindex, (int *)arg, 4);

    //3.解析命令,操作硬件
    switch(cmd) {
        case LED_ON:
            status = 0;
            break;
        case LED_OFF:
            status = 1;
            break;
        default:
            return -EINVAL;
    }
    if(kindex>= 0 && kindex <4)
    {
        gpio_direction_output(leds[kindex].gpio, status);
    }
    return 0;
}


struct file_operations leds_fops =
{
    .owner = THIS_MODULE,
    .unlocked_ioctl = leds_ioctl,
};

struct miscdevice leds_misc =
{
    .minor = MISC_DYNAMIC_MINOR,//自动分配次设备号
    .name  = "leds", //设备文件名称
    .fops = &leds_fops,
};
int __init leds_drv_init(void)
{
    int i = 0;

    for(; i<ARRAY_SIZE(leds); i++)
    {
        gpio_request(leds[i].gpio, leds[i].name);
    }
    misc_register(&leds_misc);

    return 0;
}
void __exit leds_drv_exit(void)
{
    int i = 0;

    misc_deregister(&leds_misc);

    for(; i<ARRAY_SIZE(leds); i++)
    {
        gpio_request(leds[i].gpio, leds[i].name);
    }
}
module_init(leds_drv_init);
module_exit(leds_drv_exit);
