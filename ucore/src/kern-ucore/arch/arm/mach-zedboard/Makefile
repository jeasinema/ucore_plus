obj-y := board.o clock.o zedboard_uart.o picirq.o zedboard_gpio.o

ifdef UCONFIG_ZYNQ_USB
ZYNQ_INC_PATH := mach-zedboard/include
TARGET_CFLAGS += $(addprefix -I$(KTREE)/arch/$(ARCH)/, $(ZYNQ_INC_PATH))
TARGET_CFLAGS += $(addprefix -I$(KTREE)/arch/$(ARCH)/, $(ZYNQ_INC_PATH)/..)
TARGET_CFLAGS += $(addprefix -include $(KTREE)/arch/$(ARCH)/, mach-zedboard/zynq-common.h)
TARGET_CFLAGS += $(addprefix -include $(KTREE)/arch/$(ARCH)/, mach-zedboard/zynq_thinpadng.h)
TARGET_CFLAGS += $(addprefix -include $(KTREE)/arch/$(ARCH)/, mach-zedboard/zynq_config.h)
TARGET_LDFLAGS += -L$(KTREE)
TARGET_LDFLAGS += -lulib
obj-y += ulpi.o ulpi-viewport.o ehci-hcd.o ehci-zynq.o usb.o usb_hub.o slcr.o ps7_init_gpl.o ctype.o cache_v7.o cache_v7_asm.o time.o timer.o dlmalloc.o strto.o clk.o usb_cmd.o malloc_simple.o 
endif
