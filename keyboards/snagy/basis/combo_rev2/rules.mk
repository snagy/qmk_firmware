# MCU name
MCU = STM32L452
# Cortex version
MCU = cortex-M4

# ARM version, CORTEX-M0/M1 are 6, CORTEX-M3/M4/M7 are 7
ARMV = 7

## chip/board settings
# - the next two should match the directories in
#   <chibios>/os/hal/ports/$(MCU_FAMILY)/$(MCU_SERIES)
MCU_FAMILY = STM32
MCU_SERIES = STM32L4xx

# Linker script to use
# - it should exist either in <chibios>/os/common/ports/ARMCMx/compilers/GCC/ld/
#   or <keyboard_dir>/ld/
MCU_LDSCRIPT ?= STM32L452xE

# Startup code to use
#  - it should exist in <chibios>/os/common/startup/ARMCMx/compilers/GCC/mk/
MCU_STARTUP ?= stm32l4xx

# Board: it should exist either in <chibios>/os/hal/boards/,
# <keyboard_dir>/boards/, or drivers/boards/
BOARD ?= ST_NUCLEO64_L452RE_P

USE_FPU ?= yes

# Options to pass to dfu-util when flashing
DFU_ARGS ?= -d 0483:df11 -a 0 -s 0x08000000:leave
DFU_SUFFIX_ARGS ?= -v 0483 -p df11

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes      # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no      # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no           # USB Nkey Rollover
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
# WS2812_DRIVER = pwm
# OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

MIDI_ENABLE = yes           # MIDI support
UNICODE_ENABLE = no        # Unicode
BLUETOOTH_ENABLE = no      # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no          # Audio output on port C6
FAUXCLICKY_ENABLE = no     # Use buzzer to emulate clicky switches
HD44780_ENABLE = no        # Enable support for HD44780 based LCDs
SPLIT_KEYBOARD = yes       # Split common
SERIAL_DRIVER = usart
ENCODER_ENABLE = yes       # ENables the use of one or more encoders
LINK_TIME_OPTIMIZATION_ENABLE =yes 
LAYOUTS = all
