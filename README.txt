Compilation instructions

1.  Install Arduino IDE
    You get the latest Arduino IDE here:
    http://arduino.cc/en/Main/Software

    You need at least 1.0 for the Atmel AVR based boards and 1.5 for the ARM based boards like the due.

2.  Make sure the serial driver for your printer board is installed. The Arduino IDE contains signed drivers
    for the Arduino boards. Depending on your board you might need different drivers then these. For Linux and Mac
    you often do not need any additional drivers. Ask your printer/board vendor which driver you need,
    if that is not clear to you.

3.  Some boards that are not original arduino boards and not 100% compatible to them, need separate extensions
    to the Arduino IDE. Install them.

4.  Start Arduino IDE and open the file "Wangsamas.ino"

5.  Select the board and port for upload in the arduino ide.

6.  Check Configuration.h for hints, if something needs to be checked or modified.

7.  Upload the firmware with the upload button (right arrow in toolbar).

If you have a normal mega 2560 compatible board, you can use codeblocks for arduino instead of the arduino ide:
http://arduinodev.com/codeblocks/
Open the Wangsamas.cbp file instead of the ino file and start with 6.

MOTHERBOARD LIST
3D Master pin assignment = 12
Arduino Diecimila AVR_ATmega168 = 0
Arduino Mega RAMPS_V_1_3 = 33
Arduino Mega RAMPS_V_1_3 AZTEEG_X3 = 34
Arduino Mega RAMPS_V_1_3 AZTEEG_X3_PRO =35
Duemilanove w/ ATMega328P pin assignment = 4
FELIXprinters = 101
Gen3 PLUS for RepRap Motherboard V1.2 AVR_ATmega644P = 3
Gen6 deluxe assignment = 51
Gen6 pin assignment = 5
Gen7 1.1 and above pin assignment 7
Gen7 1.4.1 pin assignment 71
MegaTronics = 70
MegaTronics v2.0 = 701
MegaTronics v3.0 = 703
Melzi pin assignment = 63
Minitronics v1.0 = 702
NOOOOOO RS485/EXTRUDER CONTROLLER AVR_ATmega644P = 2
OpenHardware.co.za FrontPrint Controller 1.0 = 73
PiBot = 314
PiBot_V_1_6, PiBot_HD_VERSION "Rev1.6" = 315
PiBot_V_2_0, PiBot_HD_VERSION "Rev2.0" = 316
Printrboard Rev. B pin assingments (ATMEGA90USB1286) = 9
Printrboard Rev. F pin assingments (ATMEGA90USB1286) = 92
RAMBo Pin Assignments = 301
RUMBA pin assignment = 80
Sanguino/RepRap Motherboard with direct-drive extruders AVR_ATmega644P = 1
Sanguinololu pin assignment = 6
SANGUINOLOLU_V_1_2 = 62
SANGUINOLOLU_V_1_2 AZTEEG_X1 = 65
Sanguish Beta pin assignment = 501
Sethi 3D_1 Extruder = 72
Teensylu 0.7 pin assingments (ATMEGA90USB) = 8
Ultimaker Shield pin assignment v1.5.7 = 37
Unique One rev. A pin assingments (ATMEGA90USB) = 88


HINT: It you have enabled eeprom support, the first upload will copy the configurations into the eeprom. Later
uploads will NOT overwrite these settings! Connect with Repetier-Host to your printer and open the eeprom editor
to change these values. Alternatively, send the commands
 M502
 M500
to copy the new values in Configuration.h to eeprom.


IMPORTANT FOR DUE USERS

There is an additional folder AdditionalArduinoFiles with separate readme that describes how to get
watchdog working. It is a very good idea to compile with working watchdog!!!
