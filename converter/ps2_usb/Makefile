# Target file name (without extension).
TARGET = ps2_usb

# Directory common source filess exist
TOP_DIR = ../..

# Directory keyboard dependent files exist
TARGET_DIR = .


# MCU name, you MUST set this to match the board you are using
# type "make clean" after changing this, so all files will be rebuilt
#MCU = at90usb162       # Teensy 1.0
MCU = atmega32u4       # Teensy 2.0
#MCU = at90usb646       # Teensy++ 1.0
#MCU = at90usb1286      # Teensy++ 2.0


# Processor frequency.
#   Normally the first thing your program should do is set the clock prescaler,
#   so your program will run at the correct speed.  You should also set this
#   variable to same clock speed.  The _delay_ms() macro uses this, and many
#   examples use this variable to calculate timings.  Do not add a "UL" here.
F_CPU = 16000000


# Build Options
#   *Comment out* to disable the options.
#
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
NKRO_ENABLE = yes	# USB Nkey Rollover

PS2_USE_USART = yes	# uses hardware USART engine for PS/2 signal receive(recomened)
#PS2_USE_INT = yes	# uses external interrupt for falling edge of PS/2 clock pin
#PS2_USE_BUSYWAIT = yes	# uses primitive reference code


# keyboard dependent files
SRC =   keymap.c \
	matrix.c \
	led.c


ifdef PS2_USE_USART
    SRC += protocol/ps2_usart.c
    OPT_DEFS += -DPS2_USE_USART
endif
ifdef PS2_USE_INT
    SRC += protocol/ps2.c
    OPT_DEFS += -DPS2_USE_INT
endif
ifdef PS2_USE_BUSYWAIT
    SRC += protocol/ps2.c
    OPT_DEFS += -DPS2_USE_BUSYWAIT
endif


#CONFIG_H = config_pjrc_usart.h
CONFIG_H = config.h


#---------------- Programming Options --------------------------
PROGRAM_CMD = teensy_loader_cli -mmcu=$(MCU) -w -v $(TARGET).hex


# Search Path
VPATH += $(TARGET_DIR)
VPATH += $(TOP_DIR)


include $(TOP_DIR)/protocol/pjrc.mk
include $(TOP_DIR)/protocol.mk
include $(TOP_DIR)/common.mk
include $(TOP_DIR)/rules.mk
