#ifndef ZYNQ_CONFIG_H
#define ZYNQ_CONFIG_H

#define CONFIG_CREATE_ARCH_SYMLINK
#define CONFIG_ARM
#define CONFIG_SYS_ARCH "arm"
#define CONFIG_SYS_CPU "armv7"
#define CONFIG_SYS_SOC "zynq"
#define CONFIG_SYS_VENDOR "xilinx"
#define CONFIG_SYS_BOARD "zynq"
#define CONFIG_SYS_CONFIG_NAME "zynq_thinpadng"

#define CONFIG_HAS_VBAR
#define CONFIG_HAS_THUMB2
#define CONFIG_CPU_V7
#define CONFIG_SYS_ARM_ARCH 7
#define CONFIG_ARCH_ZYNQ
#define CONFIG_SYS_MALLOC_F_LEN 0x10000
#define CONFIG_SYS_MALLOC_F
#define CONFIG_SPL_DM
#define CONFIG_DM_SERIAL
#define CONFIG_DM_SPI
#define CONFIG_DM_SPI_FLASH
#define CONFIG_DM_GPIO
#define CONFIG_BOOT_INIT_FILE ""
#define CONFIG_DEFAULT_DEVICE_TREE "zynq-thinpadng"

#define CONFIG_LOCALVERSION ""
#define CONFIG_LOCALVERSION_AUTO
#define CONFIG_CC_OPTIMIZE_FOR_SIZE
#define CONFIG_EXPERT
#define CONFIG_SYS_MALLOC_CLEAR_ON_INIT

#define CONFIG_SUPPORT_SPL
#define CONFIG_SPL
#define CONFIG_SPL_SEPARATE_BSS
#define CONFIG_FIT
#define CONFIG_FIT_VERBOSE
#define CONFIG_FIT_SIGNATURE
#define CONFIG_SYS_EXTRA_OPTIONS ""
#define CONFIG_ARCH_FIXUP_FDT

#define CONFIG_BOOTSTAGE_USER_COUNT 20
#define CONFIG_BOOTSTAGE_STASH_ADDR 0
#define CONFIG_BOOTSTAGE_STASH_SIZE 4096

#define CONFIG_QSPI_BOOT
#define CONFIG_SD_BOOT
#define CONFIG_BOOTDELAY 5
#define CONFIG_IDENT_STRING ""
#define CONFIG_SYS_NO_FLASH

#define CONFIG_CMDLINE
#define CONFIG_HUSH_PARSER
#define CONFIG_SYS_PROMPT "thinpadNG-zynq> "

#define CONFIG_AUTOBOOT

#define CONFIG_CMD_BDI
#define CONFIG_CMD_CONSOLE
#define CONFIG_CMD_BOOTD
#define CONFIG_CMD_BOOTM
#define CONFIG_CMD_BOOTEFI
#define CONFIG_CMD_ELF
#define CONFIG_CMD_FDT
#define CONFIG_CMD_GO
#define CONFIG_CMD_RUN
#define CONFIG_CMD_IMI
#define CONFIG_CMD_XIMG
#define CONFIG_CMD_EXPORTENV
#define CONFIG_CMD_IMPORTENV
#define CONFIG_CMD_EDITENV
#define CONFIG_CMD_SAVEENV
#define CONFIG_CMD_ENV_EXISTS
#define CONFIG_CMD_MEMORY
#define CONFIG_CMD_CRC32
#define CONFIG_CMD_MEMINFO
#define CONFIG_CMD_DM
#define CONFIG_CMD_LOADB
#define CONFIG_CMD_LOADS
#define CONFIG_CMD_MMC
#define CONFIG_CMD_SF
#define CONFIG_CMD_USB
#define CONFIG_CMD_DFU
#define CONFIG_CMD_FPGA
#define CONFIG_CMD_GPIO
#define CONFIG_CMD_ECHO
#define CONFIG_CMD_ITEST
#define CONFIG_CMD_SOURCE
#define CONFIG_CMD_NET
#define CONFIG_CMD_TFTPPUT
#define CONFIG_CMD_DHCP
#define CONFIG_CMD_NFS
#define CONFIG_CMD_MII
#define CONFIG_CMD_PING
#define CONFIG_CMD_CACHE
#define CONFIG_CMD_MISC
#define CONFIG_CMD_EXT2
#define CONFIG_CMD_EXT4
#define CONFIG_CMD_EXT4_WRITE
#define CONFIG_CMD_FAT
#define CONFIG_CMD_FS_GENERIC
#define CONFIG_SUPPORT_OF_CONTROL

#define CONFIG_OF_CONTROL
#define CONFIG_SPL_OF_CONTROL
#define CONFIG_OF_EMBED
#define CONFIG_OF_SPL_REMOVE_PROPS "pinctrl-0 pinctrl-names clocks clock-names interrupt-parent"
#define CONFIG_NET
#define CONFIG_NET_RANDOM_ETHADDR
#define CONFIG_NET_TFTP_VARS
#define CONFIG_BOOTP_PXE_CLIENTARCH 0x15
#define CONFIG_BOOTP_VCI_STRING "U-Boot.armv7"

#define CONFIG_DM
#define CONFIG_DM_WARN
#define CONFIG_DM_DEVICE_REMOVE
#define CONFIG_DM_STDIO
#define CONFIG_DM_SEQ_ALIAS
#define CONFIG_SPL_DM_SEQ_ALIAS
#define CONFIG_SIMPLE_BUS
#define CONFIG_SPL_SIMPLE_BUS
#define CONFIG_OF_TRANSLATE
#define CONFIG_DM_MMC
#define CONFIG_ZYNQ_SDHCI

#define CONFIG_SPI_FLASH
#define CONFIG_SPI_FLASH_BAR
#define CONFIG_SPI_FLASH_SPANSION
#define CONFIG_SPI_FLASH_STMICRO
#define CONFIG_SPI_FLASH_WINBOND
#define CONFIG_SPI_FLASH_USE_4K_SECTORS
#define CONFIG_DM_ETH
#define CONFIG_PHYLIB
#define CONFIG_NETDEVICES
#define CONFIG_ZYNQ_GEM

#define CONFIG_REQUIRE_SERIAL_CONSOLE
#define CONFIG_SERIAL_PRESENT
#define CONFIG_SPL_SERIAL_PRESENT
#define CONFIG_ZYNQ_QSPI

#define CONFIG_USB
#define CONFIG_USB_KEYBOARD
#define CONFIG_SYS_USB_EVENT_POLL
#define CONFIG_USB_EHCI_HCD
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_ZYNQ
#define CONFIG_USB_ULPI

//#define CONFIG_USB_STORAGE
#define CONFIG_USB_GADGET
#define CONFIG_CI_UDC
#define CONFIG_USB_GADGET_VBUS_DRAW 2
#define CONFIG_USB_GADGET_DUALSPEED
#define CONFIG_USB_GADGET_DOWNLOAD
#define CONFIG_G_DNL_MANUFACTURER "Xilinx"
#define CONFIG_G_DNL_VENDOR_NUM 0x03fd
#define CONFIG_G_DNL_PRODUCT_NUM 0x0300

#define CONFIG_HAVE_PRIVATE_LIBGCC
#define CONFIG_USE_PRIVATE_LIBGCC
#define CONFIG_SYS_HZ 1000
#define CONFIG_REGEX
#define CONFIG_LIB_RAND
#define CONFIG_RSA
#define CONFIG_RSA_SOFTWARE_EXP
#define CONFIG_OF_LIBFDT
#define CONFIG_SPL_OF_LIBFDT
#define CONFIG_EFI_LOADER

#endif