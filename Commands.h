/*
Berkas ini adalah bagian dari Wangsamas-Firmware oleh Kusuma Ruslan.

Wangsamas-Firmware adalah perangkat lunak bebas: 
Anda dapat mendistribusikannya dan/atau mengubahnya 
dengan syarat dan ketentuan GNU General Public License
yang dipublikasikan oleh Free Software Foundation,
baik ijin versi 3, atau (menurut pilihanmu) versi yang terbaru.

Wangsamas-Firmware didistribusikan dengan harapan agar dapat bermanfaat,
tetapi TANPA JAMINAN; bahkan tanpa jaminan tersirat PERDAGANGAN atau
KECOCOKAN UNTUK TUJUAN TERTENTU. Lihat GNU General Public License 
untuk keterangan lebih lanjut.

Anda seharusnya sudah menerima salinan GNU General Public License bersamaan
dengan Wangsamas-Firmware. Jika tidak, lihat <http://www.gnu.org/licenses/>.

Firmware ini berdasarkan Repetier-Firmware yang berdasarkan Sprinter firmware 
yang berdasarkan Tonokip Reprap firmware yang berdasarkan Hydra-mmm firmware.

--------------------- 

This file is part of Wangsamas-Firmware by Kusuma Ruslan.

Wangsamas-Firmware is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Wangsamas-Firmware is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Wangsamas-Firmware.  If not, see <http://www.gnu.org/licenses/>.

This firmware is based on Repetier-Firmware which based on sprinter firmware
which based on Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
	
Functions in this file are used to communicate using ascii or repetier protocol.
*/

#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED

class Commands
{
public:
    static void commandLoop();
    static void checkForPeriodicalActions(bool allowNewMoves);
    static void processArc(GCode *com);
    static void processGCode(GCode *com);
    static void processMCode(GCode *com);
    static void executeGCode(GCode *com);
    static void waitUntilEndOfAllMoves();
    static void waitUntilEndOfAllBuffers();
    static void printCurrentPosition(FSTRINGPARAM(s));
    static void printTemperatures(bool showRaw = false);
    static void setFanSpeed(int speed, bool immediately = false); /// Set fan speed 0..255
    static void setFan2Speed(int speed); /// Set fan speed 0..255
    static void changeFeedrateMultiply(int factorInPercent);
    static void changeFlowrateMultiply(int factorInPercent);
    static void reportPrinterUsage();
    static void emergencyStop();
    static void checkFreeMemory();
    static void writeLowestFreeRAM();
private:
    static int lowestRAMValue;
    static int lowestRAMValueSend;
};

#endif // COMMANDS_H_INCLUDED
