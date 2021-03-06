# MCU name
MCU = STM32F072

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
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
WS2812_DRIVER = pwm
OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

MIDI_ENABLE = yes           # MIDI support
UNICODE_ENABLE = no        # Unicode
BLUETOOTH_ENABLE = no      # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = yes          # Audio output on port C6
# oops need A5
FAUXCLICKY_ENABLE = no     # Use buzzer to emulate clicky switches
HD44780_ENABLE = no        # Enable support for HD44780 based LCDs
SPLIT_KEYBOARD = yes       # Split common
SERIAL_DRIVER = usart
ENCODER_ENABLE = yes       # ENables the use of one or more encoders
LINK_TIME_OPTIMIZATION_ENABLE =yes 
LAYOUTS = all
