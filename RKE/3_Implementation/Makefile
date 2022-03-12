CC= arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS=-c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0
LDFLAGS= -nostdlib -T stm32_ls.ld
all:main.o rke.o stm32_startup.o finalled.elf run

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^
rke.o:rke.c
	$(CC) $(CFLAGS) -o $@ $^

stm32_startup.o:stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^	
	
finalled.elf:main.o rke.o stm32_startup.o
	$(CC) $(LDFLAGS) -o $@ $^
run:
	qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -mcu STM32F407VG -kernel finalled.elf
clean:
	rm -rf *.o *.elf