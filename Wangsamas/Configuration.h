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
which based on Tonokip RepRap firmw
are rewrite based off of Hydra-mmm firmware.

*/
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define UI_PRINTER_NAME "Kusuma"
#define UI_PRINTER_COMPANY "Wangsamas"

#define NUM_EXTRUDER 1
#define MOTHERBOARD 33            // 33 untuk Arduino Mega 2560 dengan RAMPS 1.3/1.4, lihat BACAini, README atau pins.h untuk PCB lainnya
#include "pins.h"

#define DRIVE_SYSTEM 7            // Cartesian 0, Delta 3, Scara 7
#define SCARA_TYPE PARALEL		  // If drive system = scara -> choose SINGLE, PARALEL
#define FEATURE_CONTROLLER 2      // 2 untuk smart controller LCD 2004, 11 untuk Reprap Graphic LCD, lihat wangsamas.h untuk LCD display lainnya
#define DEFAULT_PRINTER_MODE 0	  // 3D Printer 0, Laser 1, CNC 2

#define X_MAX_LENGTH 100			// Panjang maximum sumbu X
#define Y_MAX_LENGTH 100			// Panjang maximum sumbu Y
#define Z_MAX_LENGTH 200			// Panjang maximum sumbu Z
#define X_MIN_POS -100				// Posisi titik X minimum
#define Y_MIN_POS -100				// Posisi titik Y minimum
#define Z_MIN_POS 0					// Posisi titik Z minimum
#define XAXIS_STEPS_PER_UNIT 80		// Cartesian Steps/mm, Delta abaikan, Scara Steps/degree
#define YAXIS_STEPS_PER_UNIT 80		// Cartesian Steps/mm, Delta abaikan, Scara Steps/degree
#define ZAXIS_STEPS_PER_UNIT 200	// Cartesian Steps/mm, Delta Steps/mm, Scara Steps/mm

// Scara Setting
#define ARM_LENGTH 220					      // dalam mm. in mm
#define FOREARM_LENGTH 180			    	// dalam mm. in mm
#define SHOULDER_MIN_ANGLE 90		    	// dalam derajat. in degree 
#define ELBOW_MIN_ANGLE 5				      // dalam derajat. in degree
#define SHOULDER_MAX_ANGLE 270			  // dalam derajat. in degree
#define ELBOW_MAX_ANGLE 180				    // dalam derajat. in degree
#define SHOULDER_BED_CENTER_ANGLE 135	// Posisi sudut bahu Scara di pusat papan dalam derajat. Position of Scara shoulder angle at bed center in degree
#define ELBOW_BED_CENTER_ANGLE 90		  // Posisi sudut siku Scara di pusat papan dalam derajat. Position of Scara elbow angle at bed center in degree

// Delta settings
#define DELTA_ALPHA_A 210			        	// Sudut antara sumbu X positif dengan Tower A dalam derajat, Angle between positive X Axis and Tower A in degree 
#define DELTA_ALPHA_B 330		        		// Sudut antara sumbu X positif dengan Tower B dalam derajat, Angle between positive X Axis and Tower B in degree 
#define DELTA_ALPHA_C 90			        	// Sudut antara sumbu X positif dengan Tower C dalam derajat, Angle between positive X Axis and Tower C in degree 

#define DELTA_DIAGONAL_ROD 445 		     	// Panjang diagonal batang dalam mm, diagonal rod length in mm
#define DELTA_DIAGONAL_CORRECTION_A 0 	// Koreksi panjang batang A in mm, rod A length correction in mm
#define DELTA_DIAGONAL_CORRECTION_B 0	  // Koreksi panjang batang B in mm, rod B length correction in mm
#define DELTA_DIAGONAL_CORRECTION_C 0 	// Koreksi panjang batang C in mm, rod C length correction in mm

// ROD_RADIUS = PRINTER_RADIUS - END_EFFECTOR_HORIZONTAL_OFFSET - CARRIAGE_HORIZONTAL_OFFSET
// Jika Anda mengisi ROD_RADIUS, rumus diatas diabaikan. Jika Anda tidak mengisi ROD_RADIUS, rumus diatas dijalankan
// If you enter ROD_RADIUS value, the formula above is ignored. If you don't enter ROD_RADIUS value, the formula above calculated

#define ROD_RADIUS 209.25				          // Radius mendatar batang di posisi pusat papan, Horizontal rod radius at bed center position
#define DELTA_RADIUS_CORRECTION_A 0	  	// Koreksi jarak tower A ke pusat papan dalam mm, Tower A distance to bed center correction in mm
#define DELTA_RADIUS_CORRECTION_B 0	  	// Koreksi jarak tower B ke pusat papan dalam mm, Tower B distance to bed center correction in mm
#define DELTA_RADIUS_CORRECTION_C 0		  // Koreksi jarak tower C ke pusat papan dalam mm, Tower C distance to bed center correction in mm

#define END_EFFECTOR_HORIZONTAL_OFFSET 0  // Jarak mendatar antara effector ke batang, horizontal distance between effector and rod
#define CARRIAGE_HORIZONTAL_OFFSET 0	    // Jarak mendatar antara carriage ke batang, horizontal distance between carriage and rod
#define PRINTER_RADIUS 209.25			        // Jarak antara nozzle dan tower, distance between nozzle and tower
#define DELTA_MAX_RADIUS 150			        // Radius cetak maksimum, max print radius

#define MAX_FEEDRATE_X 100		 		// Kecepatan sumbu X, X Axis speed
#define MAX_FEEDRATE_Y 100				// Kecepatan sumbu Y, Y Axis speed
#define MAX_FEEDRATE_Z 100				// Kecepatan sumbu Z, Z Axis speed
#define HOMING_FEEDRATE_X 30			// Kecepatan sumbu X ketika menuju endstop, X Axis speed when go to endstop
#define HOMING_FEEDRATE_Y 30			// Kecepatan sumbu Y ketika menuju endstop, Y Axis speed when go to endstop
#define HOMING_FEEDRATE_Z 20			// Kecepatan sumbu Z ketika menuju endstop, Z Axis speed when go to endstop
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000	    		// Percepatan max sumbu X ketika mencetak, X Axis max acceleration when print
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000	    		// Percepatan max sumbu Y ketika mencetak, Y Axis max acceleration when print
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100		    	// Percepatan max sumbu Z ketika mencetak, Z Axis max acceleration when print
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000	// Percepatan max sumbu X ketika pindah, X Axis max acceleration when travel
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000  // Percepatan max sumbu Y ketika pindah, Y Axis max acceleration when travel
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100	  // Percepatan max sumbu Z ketika pindah, Z Axis max acceleration when travel
#define MAX_JERK 10										                    	// Hentakan maksimum sumbu XY
#define MAX_ZJERK 0.3							                    			// Hentakan maksimum sumbu Z

// ################# XYZ movements ###################

#define INVERT_X_DIR 1										// Ganti 0 atau 1 jika gerakan arah sumbu X terbalik
#define INVERT_Y_DIR 1										// Ganti 0 atau 1 jika gerakan arah sumbu Y terbalik
#define INVERT_Z_DIR 1										// Ganti 0 atau 1 jika gerakan arah sumbu Z terbalik

// ################ Endstop configuration #####################

#define X_HOME_DIR 1										// X MIN Hardware endstop -1, X MAX Hardware endstop 1
#define Y_HOME_DIR 1										// Y MIN Hardware endstop -1, Y MAX Hardware endstop 1
#define Z_HOME_DIR 1										// Z MIN Hardware endstop -1, Z MAX Hardware endstop 1

#define DELTA_HOME_ON_POWER 1								// 1 untuk menuju home ketika printer menyala, 0 untuk diam ketika printer menyala
#define HOMING_ORDER HOME_ORDER_ZYX							// Urutan sumbu menuju endstop X, Y, Z sesuai keinginan
//#define SOFTWARE_LEVELING

#define MIN_HARDWARE_ENDSTOP_X false								// True Jika Endstop berada pada posisi X minimum, false jika tidak
#define MIN_HARDWARE_ENDSTOP_Y false							// True Jika Endstop berada pada posisi Y minimum, false jika tidak
#define MIN_HARDWARE_ENDSTOP_Z false							// True Jika Endstop berada pada posisi Z minimum, false jika tidak
#define MAX_HARDWARE_ENDSTOP_X true							// True Jika Endstop berada pada posisi X MAXimum, false jika tidak
#define MAX_HARDWARE_ENDSTOP_Y true								// True Jika Endstop berada pada posisi Y MAXimum, false jika tidak
#define MAX_HARDWARE_ENDSTOP_Z true								// True Jika Endstop berada pada posisi Z MAXimum, false jika tidak

#define min_software_endstop_x true							// True jika ingin X minimum dibatasi software, false jika tidak
#define min_software_endstop_y true								// True jika ingin Y minimum dibatasi software, false jika tidak
#define min_software_endstop_z true								// True jika ingin Z minimum dibatasi software, false jika tidak
#define max_software_endstop_x false								// True jika ingin X MAXimum dibatasi software, false jika tidak
#define max_software_endstop_y false							// True jika ingin Y MAXimum dibatasi software, false jika tidak
#define max_software_endstop_z false							// True jika ingin Z MAXimum dibatasi software, false jika tidak
#define max_software_endstop_r true

#define ENDSTOP_X_MIN_INVERTING false
#define ENDSTOP_Y_MIN_INVERTING false
#define ENDSTOP_Z_MIN_INVERTING false
#define ENDSTOP_X_MAX_INVERTING false
#define ENDSTOP_Y_MAX_INVERTING false
#define ENDSTOP_Z_MAX_INVERTING false

#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_PULLUP_Z_MIN true
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_PULLUP_Z_MAX true

#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 5
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 1
#define ENDSTOP_Y_BACK_ON_HOME 1
#define ENDSTOP_Z_BACK_ON_HOME 1
#define ALWAYS_CHECK_ENDSTOPS 1

#define STEP_COUNTER
#define DELTA_X_ENDSTOP_OFFSET_STEPS 0
#define DELTA_Y_ENDSTOP_OFFSET_STEPS 0
#define DELTA_Z_ENDSTOP_OFFSET_STEPS 0
#define DELTA_FLOOR_SAFETY_MARGIN_MM 15

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0

// #################### Z-Probing #####################

#define DISTORTION_CORRECTION 1     // Menyesuaikan ketidakrataan papan 
#define FEATURE_AUTOLEVEL 1         // Menyesuaikan kemiringan papan
#define FEATURE_Z_PROBE 1           // Z probe harus aktif untuk distortion correction & autolevel  
#define Z_PROBE_PIN ORIG_Z_MIN_PIN  

#define Z_PROBE_Z_OFFSET 0
#define Z_PROBE_Z_OFFSET_MODE 0
#define UI_BED_COATING 1
#define Z_PROBE_BED_DISTANCE 10
#define Z_PROBE_PULLUP 1
#define Z_PROBE_ON_HIGH 1
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 10
#define Z_PROBE_XY_SPEED 100
#define Z_PROBE_SWITCHING_DISTANCE 3
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_HEIGHT 0
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define Z_PROBE_REQUIRES_HEATING 0
#define Z_PROBE_MIN_TEMPERATURE 150
#define Z_PROBE_X1 -70
#define Z_PROBE_Y1 -70
#define Z_PROBE_X2 70
#define Z_PROBE_Y2 -70
#define Z_PROBE_X3 -70
#define Z_PROBE_Y3 70
#define BED_LEVELING_METHOD 1
#define BED_CORRECTION_METHOD 0
#define BED_LEVELING_GRID_SIZE 5
#define BED_LEVELING_REPETITIONS 1
#define BED_MOTOR_1_X 0
#define BED_MOTOR_1_Y 0
#define BED_MOTOR_2_X 200
#define BED_MOTOR_2_Y 0
#define BED_MOTOR_3_X 100
#define BED_MOTOR_3_Y 200
#define BENDING_CORRECTION_A 0
#define BENDING_CORRECTION_B 0
#define BENDING_CORRECTION_C 0
#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0

#define DISTORTION_CORRECTION_POINTS 7
#define DISTORTION_CORRECTION_R 100
#define DISTORTION_PERMANENT 1
#define DISTORTION_UPDATE_FREQUENCY 15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1
#define DISTORTION_EXTRAPOLATE_CORNERS 0
#define DISTORTION_XMIN -70
#define DISTORTION_YMIN -70
#define DISTORTION_XMAX 70
#define DISTORTION_YMAX 70

#define EXTRUDER_FAN_COOL_TEMP 50
#define PDM_FOR_EXTRUDER 0
#define PDM_FOR_COOLER 0
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 20
#define DECOUPLING_TEST_MIN_TEMP_RISE 1
#define KILL_IF_SENSOR_DEFECT 0
#define RETRACT_ON_PAUSE 2
#define PAUSE_START_COMMANDS ""
#define PAUSE_END_COMMANDS ""
#define SHARED_EXTRUDER_HEATER 0
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_Z_OFFSET 0
#define EXT0_STEPS_PER_UNIT 270		// Cartesian Steps/mm, Delta Steps/mm, Scara Steps/mm
#define EXT0_TEMPSENSOR_TYPE 1
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN 
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 0
#define EXT0_ENABLE_PIN ORIG_E0_ENABLE_PIN 
#define EXT0_ENABLE_ON 0
#define EXT0_MIRROR_STEPPER 0
#define EXT0_STEP2_PIN ORIG_E0_STEP_PIN 
#define EXT0_DIR2_PIN ORIG_E0_DIR_PIN 
#define EXT0_INVERSE2 0
#define EXT0_ENABLE2_PIN ORIG_E0_ENABLE_PIN 
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 5
#define EXT0_MAX_ACCELERATION 10000
#define EXT0_HEAT_MANAGER 3
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 230
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_PGAIN_OR_DEAD_TIME 7
#define EXT0_PID_I 2
#define EXT0_PID_D 40
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN -1
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define EXT0_DECOUPLE_TEST_PERIOD 12000
#define EXT0_JAM_PIN -1
#define EXT0_JAM_PULLUP 0

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using Arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not being compatible!
//#define COMPAT_PRE1
#define BLUETOOTH_SERIAL  -1
#define BLUETOOTH_BAUD  115200
#define MIXING_EXTRUDER 0
#define EEPROM_MODE 1

#undef FAN_BOARD_PIN
#define FAN_BOARD_PIN -1
#define BOARD_FAN_SPEED 255
#define FAN_THERMO_PIN -1
#define FAN_THERMO_MIN_PWM 128
#define FAN_THERMO_MAX_PWM 255
#define FAN_THERMO_MIN_TEMP 45
#define FAN_THERMO_MAX_TEMP 60
#define FAN_THERMO_THERMISTOR_PIN -1
#define FAN_THERMO_THERMISTOR_TYPE 1

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 0
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 1
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 0
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define HEATED_BED_DECOUPLE_TEST_PERIOD 300000
#define MIN_EXTRUDER_TEMP 150
#define MAXTEMP 275
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 290

#define FEATURE_RETRACTION 1
#define AUTORETRACT_ENABLED 0
#define RETRACTION_LENGTH 3
#define RETRACTION_LONG_LENGTH 13
#define RETRACTION_SPEED 40
#define RETRACTION_Z_LIFT 1
#define RETRACTION_UNDO_EXTRA_LENGTH 0
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 0
#define RETRACTION_UNDO_SPEED 20
#define FILAMENTCHANGE_X_POS 0
#define FILAMENTCHANGE_Y_POS 0
#define FILAMENTCHANGE_Z_ADD  20
#define FILAMENTCHANGE_REHOME 2
#define FILAMENTCHANGE_SHORTRETRACT 5
#define FILAMENTCHANGE_LONGRETRACT 50
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 320
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 500
#define JAM_MIN_STEPS 10
#define JAM_ACTION 1

#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 0
#define USER_THERMISTORTABLE0 {}
#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 100 // Pengaturan lebih akurat untuk gerakan cetak. Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 30 // Pengaturan kurang akurat untuk gerakan lainnya. Less accurate setting for other moves
#define EXACT_DELTA_MOVES 1

#define DELTASEGMENTS_PER_PRINTLINE 24
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define ZHOME_MIN_TEMPERATURE 0
#define ZHOME_HEAT_ALL 1
#define ZHOME_HEAT_HEIGHT 20
#define ZHOME_X_POS 999999
#define ZHOME_Y_POS 999999
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define DIRECTION_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 0 // time in microseconds
#define INTERPOLATE_ACCELERATION_WITH_Z 0
#define ACCELERATION_FACTOR_TOP 100
#define PRINTLINE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define EXTRUDER_SWITCH_XY_SPEED 100
#define DUAL_X_AXIS 0
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_THREE_ZSTEPPER 0
#define Z3_STEP_PIN   ORIG_E2_STEP_PIN
#define Z3_DIR_PIN    ORIG_E2_DIR_PIN
#define Z3_ENABLE_PIN ORIG_E2_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0
#define USE_ADVANCE 0
#define ENABLE_QUADRATIC_ADVANCE 0

// ################# Misc. settings ##################

#define BAUDRATE 115200
#define ENABLE_POWER_ON_STARTUP 1
#define POWER_INVERTING 0
#define KILL_METHOD 1
#define ACK_WITH_LINENUMBER 1
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1
#undef PS_ON_PIN
#define PS_ON_PIN ORIG_PS_ON_PIN
#define JSON_OUTPUT 0

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1
#define UI_SERVO_CONTROL 0
#define FAN_KICKSTART_TIME  200
#define FEATURE_WATCHDOG 0


#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 0
#undef SDCARDDETECT
#define SDCARDDETECT -1
#define SDCARDDETECTINVERTED 0
#endif
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define SD_RUN_ON_STOP ""
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_FAN2_CONTROL 0
#define ADC_KEYPAD_PIN -1
#define LANGUAGE_EN_ACTIVE 1
#define LANGUAGE_DE_ACTIVE 0
#define LANGUAGE_NL_ACTIVE 0
#define LANGUAGE_PT_ACTIVE 0
#define LANGUAGE_IT_ACTIVE 0
#define LANGUAGE_ES_ACTIVE 0
#define LANGUAGE_FI_ACTIVE 0
#define LANGUAGE_SE_ACTIVE 0
#define LANGUAGE_FR_ACTIVE 0
#define LANGUAGE_CZ_ACTIVE 0
#define LANGUAGE_PL_ACTIVE 0
#define LANGUAGE_TR_ACTIVE 0
#define LANGUAGE_IN_ACTIVE 1 // Indonesia
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 0
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 2
#define UI_REVERSE_ENCODER 1
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 0
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 1000
#define UI_DYNAMIC_ENCODER_SPEED 1
        /**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 60
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   190
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 110
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   240
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   260
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3


#define NUM_MOTOR_DRIVERS 0

// ##########################################################################################
// ##                             Laser configuration                                      ##
// ##########################################################################################

/*
Jika firmware dalam mode laser, maka dapat atur ouput laser untuk potong atau ukir materials
Gunakan fitur ini hanya jika Anda tahu tentang keamanan dan perlindungan yang dibutuhkan.
Laser berbahaya dan dapat melukai atau membuat buta!

Driver laser standar hanya bisa nyala dan mati. Di sini Anda atur kekuatannya dengan kecepatan.
Untuk dioda laser yang dapat diganti seharusnya ini cukup. Jika Anda butuh pengaturan lebih
Anda dapat tetapkan kekuatan dalam jangkauan 0-255 dengan tambahan khusus pada driver. lihat driver.
dan komentar pada bagaimana cara agar melanjutkan fungsi tanpa menyerang dengan sistem jadwal kita.

Jika Anda punya sistem serbuk laser Anda akan menginginkan E ditimpa. Jika gerakan mengandung posisi
extruder yang naik maka gerakan itu akan dilaser. Dengan trik ini Anda dapat gunakan fdm slicer yang ada
untuk laser output. Lebar laser adalah lebar pengeluaran (extrusion)

Alat lain mungkin gunakan M3 dan M5 untuk menyalakan/mematikan laser. Di sini gerakan G1/G2/G3 menyalakan laser
dan gerakan G0 mematikan laser.

Dalam kasus manapun, laser hanya nyala ketika bergerak. pada akhir gerakan secara otomatis dimatikan.

---------------------------------------------------------------------------

If the firmware is in laser mode, it can control a laser output to cut or engrave materials.
Please use this feature only if you know about safety and required protection. Lasers are
dangerous and can hurt or make you blind!!!

The default laser driver only supports laser on and off. Here you control the íntensity with
your feedrate. For exchangeable diode lasers this is normally enough. If you need more control
you can set the intensity in a range 0-255 with a custom extension to the driver. See driver.h
and comments on how to extend the functions non invasive with our event system.

If you have a laser - powder system you will like your E override. If moves contain a
increasing extruder position it will laser that move. With this trick you can
use existing fdm slicers to laser the output. Laser width is extrusion width.

Other tools may use M3 and M5 to enable/disable laser. Here G1/G2/G3 moves have laser enabled
and G0 moves have it disables.

In any case, laser only enables while moving. At the end of a move it gets
automatically disabled.
*/

#define SUPPORT_LASER 0
#define LASER_PIN -1
#define LASER_ON_HIGH 1

// ##                              CNC configuration                                       ##

/*
Jika firmware dalam mode CNC, pemutar dapat diatur dengan M3/M4/M5. Cara kerjanya 
mirip seperti mode laser, tetapi pemutar tetap nyala ketika gerakan G0 dan dapat 
mengatur rpm (hanya dengan tambahan jadwal yang mendukung) dan arah pemutar.
Juga dapat menambahkan tundaan untuk menunggu agar poros berjalan pada kecepatan penuh.

----------------------------------------------------------

If the firmware is in CNC mode, it can control a mill with M3/M4/M5. It works
similar to laser mode, but mill keeps enabled during G0 moves and it allows
setting rpm (only with event extension that supports this) and milling direction.
It also can add a delay to wait for spindle to run on full speed.
*/

#define SUPPORT_CNC 0
#define CNC_WAIT_ON_ENABLE 300
#define CNC_WAIT_ON_DISABLE 0
#define CNC_ENABLE_PIN -1
#define CNC_ENABLE_WITH 1
#define CNC_DIRECTION_PIN -1
#define CNC_DIRECTION_CW 1



#endif

