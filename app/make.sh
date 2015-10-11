#!/bin/bash -e
ESPTOOL=esptool.py
ESPPORT=/dev/ttyUSB0
ESPBAUD=115200
flashimageoptions="-fm qio -ff 40m -fs 4m"
#make COMPILE=gcc BOOT=none APP=0 SPI_SPEED=40 SPI_MODE=QIO SPI_SIZE=1024
#${ESPTOOL} --port ${ESPPORT} --baud ${ESPBAUD} write_flash 0x00000 ../bin/eagle.flash.bin 0xA0000 ../bin/eagle.irom0text.bin
make COMPILE=gcc BOOT=none APP=0 SPI_SPEED=40 SPI_MODE=QIO SPI_SIZE=512
${ESPTOOL} elf2image -fs 4m .output/eagle/image/eagle.app.v6.out -o ../bin/
#${ESPTOOL} --port ${ESPPORT} --baud ${ESPBAUD} write_flash 0x00000 ../bin/0x00000.bin 0x09000 ../bin/0x09000.bin

##flashinit:
#${ESPTOOL} --port ${ESPPORT} --baud ${ESPBAUD} write_flash ${flashimageoptions} 0x7c000 ../bin/esp_init_data_default.bin 0x7e000 ../bin/blank.bin
