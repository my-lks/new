obj-m += leds_drv.o
all:
	make -C  ../../kernel M=$(PWD) modules
	cp *.ko ../../rootfs/home/drivers/
clean:
	make -C  ../../kernel M=$(PWD) clean 
