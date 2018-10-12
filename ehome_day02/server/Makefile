

OBJS = server.o leds.o leds_hw.o 

server: $(OBJS)
	arm-cortex_a9-linux-gnueabi-gcc  $(OBJS) -o server $(LDFLAGS)
	cp server ../rootfs/home/bin/
%.o:%.c
	arm-cortex_a9-linux-gnueabi-gcc  -c $< -o $@ 
clean:
	rm server *.o -rf

