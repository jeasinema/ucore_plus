/*
 * =====================================================================================
 *
 *       Filename:  board.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2012 01:21:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chen Yuheng (Chen Yuheng), chyh1990@163.com
 *   Organization:  Tsinghua Unv.
 *
 * =====================================================================================
 */

#include <board.h>
#include <picirq.h>
#include <serial.h>
#include <pmm.h>
#include <clock.h>

#include "ps7_init_gpl.h"

extern void usb_stop(void);
extern void do_usb_start(void);
extern void usb_show_tree(void);
extern int drv_usb_kbd_init(void);
extern int usb_get_keyboard(void);
extern int usb_kbd_getc(int);


static const char *message = "Initializing ZEDBOARD...\n";

/*
static void put_string(const char *str)
{
	while (*str)
		serial_putc(*str++);
}
*/

#define EXT_CLK 38400000

void board_init_early()
{
#ifdef USE_UART0
	const int port = 0;
#else 
    const int port = 1;
#endif
	// put_string(message);
	//gpio_init();
	//gpio_test();
#if defined(UCONFIG_ZYNQ_USB)
    ps7_init();
#endif

	serial_init(port);  // for the sake of debug, init serial in advance

#if defined(UCONFIG_ZYNQ_USB)
    initf_malloc();
    mem_malloc_init(0xc2300000, 0xFFFFF);
    usb_stop();
    do_usb_start();
    kprintf("prepare for show tree\n");
    usb_show_tree();
    int kbd_id = usb_get_keyboard();
    //drv_usb_kbd_init();  do_usb_start already call drv_usb_kbd_init()
    
    // demo usb keyboard shell
    const char kbd_prompt[] = "usb_kbd>";
    kprintf("USB keybaord demo console!\n");
    kprintf("\n%s", kbd_prompt);
    while (kbd_id >= 0) {
        int charc = usb_kbd_getc(kbd_id);
        if (charc == '\n') 
            kprintf("\n%s", kbd_prompt);
        else 
            kprintf("%c", charc);
    }
#endif
}


void board_init()
{
#ifdef USE_UART0
	const int port = 0;
#else 
    const int port = 1;
#endif
    // ioremap apu
    uint32_t apu_base = 
        (uint32_t) __ucore_ioremap(ZEDBOARD_APU_BASE, 3 * PGSIZE, 0);
    
    // enable interrupts(GIC)
	pic_init2(apu_base);

    // init timer and its interrupt
	clock_init_arm(apu_base, GLOBAL_TIMER0_IRQ + PER_IRQ_BASE_SPI);

    // do ioremap on uart and init its interrupt
    if (port == 1) 
        serial_init_remap_irq(PER_IRQ_BASE_NONE_SPI + ZEDBOARD_UART1_IRQ, port);
    else
        serial_init_remap_irq(PER_IRQ_BASE_NONE_SPI + ZEDBOARD_UART0_IRQ, port);

    // init usb
    //do_usb_start();
    //usb_show_tree();
}

/* no nand */
int check_nandflash()
{
	return 0;
}

struct nand_chip *get_nand_chip()
{
	return NULL;
}
