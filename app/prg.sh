#!/bin/bash -e
ESPTOOL=esptool.py
ESPPORT=/dev/ttyUSB0
ESPBAUD=115200
flashimageoptions="-fm qio -ff 40m -fs 4m"
${ESPTOOL} --port ${ESPPORT} --baud ${ESPBAUD} write_flash 0x00000 ../bin/0x00000.bin 0x09000 ../bin/0x09000.bin
## full flashinit:
#${ESPTOOL} --port ${ESPPORT} --baud ${ESPBAUD} write_flash ${flashimageoptions} 0x7c000 ../bin/esp_init_data_default.bin 0x7e000 ../bin/blank.bin 0x00000 ../bin/0x00000.bin 0x09000 ../bin/0x09000.bin
