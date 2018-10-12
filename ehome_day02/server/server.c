
#include "../include/ehome.h"
extern  void monitor_operations(int fd,int sd,  struct sockaddr* to);
    

int main()
{
    int data  = 0;
    int sd =  socket(PF_INET, SOCK_DGRAM, 0);

    struct sockaddr_in addr;
    addr.sin_family = PF_INET;
    addr.sin_port   = htons(PORT);
    addr.sin_addr.s_addr = inet_addr("192.168.1.6");

    bind(sd, (const struct sockaddr *)&addr, sizeof(addr));

    while(1)
    {
        int cmd = 0;
        int ret = 0;
        struct sockaddr_in fromaddr;
        int len = sizeof(fromaddr);
        recvfrom(sd, &cmd, sizeof(cmd), 0, 
                 (struct sockaddr *)&fromaddr,
                 &len);
        pr_debug("recv cmd=%d\n", cmd);
        if(LED_BEDROOM_ON<=cmd && cmd<=LED_RESTROOM_OFF)
        {
            leds_operations(cmd);
        }
        else
        {
            pr_debug("%s:unknown command!\n",__func__);
        }

    }

    return 0;
}







