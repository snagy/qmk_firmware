# The Buttons: Basis

An ortho 62% split with encoders

Keyboard Maintainer: [snagy](https://github.com/snagy)  

Make example for this keyboard (after setting up your build environment):

    make basis:default

Example of flashing this keyboard:

    make basis/rev0:default:flash
    
or with the qmk CLI installed:

    qmk compile -kb snagy/basis/rev1 -km default 
    

TO FLASH REV 3 (stm32l452 based boards)

./src/dfu-util -a 0 -d 0482:df11 -s 0x08000000:leave -D ~/qmk_firmware/snagy_basis_combo_rev2_default.bin

using dfu-util built with the patch in https://sourceforge.net/p/dfu-util/tickets/46/

    

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

