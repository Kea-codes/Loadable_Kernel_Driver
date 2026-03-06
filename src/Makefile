
#KERNEL BUILD DIRECTORY
KDIR := /lib/modules/$(shell uname -r)/build

obj-m:= main.o

#COMPILING
all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	rf -f *.ko

install:
	sudo insmod main.ko

uninstall:
	sudo rmmod main || true

log:
	sudo dmesg | tail -20

