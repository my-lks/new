

#ifndef __EHMOE_H__
#define __EHOME_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <errno.h>

#define SERVERIP "192.168.1.6"
#define PORT        8000

#define LED_BEDROOM_ON     10 //卧室
#define LED_BEDROOM_OFF    11 //卧室
#define LED_SALOON_ON      12 //客厅
#define LED_SALOON_OFF     13 //客厅
#define LED_KITCHEN_ON     14 //厨房
#define LED_KITCHEN_OFF    15 //厨房
#define LED_RESTROOM_ON    16 //厕所
#define LED_RESTROOM_OFF   17 //厕所

#define BEEP_ON         20
#define BEEP_OFF        21

#define MUSIC_PLAY      40
#define MUSIC_PAUSE     41
#define MUSIC_NEXT      42
#define MUSIC_PREV      43

#define IF_MONITOR      50


#define UPDATE_KERNEL   60
#define UPDATE_SERVER   61
#define UPDATE_CLIENT   62

#define DEBUG
#ifdef DEBUG
    /*##表示如果可变参数被忽略或为空，将使预处理器（ preprocessor ）去除掉它前面的那个逗号。*/
    #define pr_debug(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
    #define pr_debug(fmt, ...) 
#endif 

#endif


