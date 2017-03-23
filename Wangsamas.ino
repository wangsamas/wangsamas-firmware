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

 Lihat di sini untuk keterangan gcode: http://linuxcnc.org/handbook/gcode/g-code.html
 dan http://objects.reprap.org/wiki/Mendel_User_Manual:_RepRapGCodes

code yang diterapkan
bagian GCodes

- G0  -> G1
- G1  - Pergerakan koordinat X Y Z E, S1 meniadakan pemeriksaan batasan, S0 mengadakannya
- G4  - Berdiam S<detik> atau P<milli detik>
- G5  - Pergerakan putar X (Bahu), Y (Siku) untuk SCARA
- G10 S<1 = Tarikan panjang, 0 = tarikan pendek = bawaan> menarik filamen menurut pengaturan yang tersimpan
- G11 S<1 = Tarikan panjang, 0 = tarikan pendek = bawaan> membalikan tarikan filamen menurut pengaturan yang tersimpan
- G20 - Units untuk G0/G1 adalah inci.
- G21 - Units untuk G0/G1 adalah mm.
- G28 - Semua sumbu atau yang disebut kembali ke awalan.
- G29 S<0..2> - Periksa-Z pada 3 titik pemeriksaan yang ditetapkan. S = 1 ukur rata2 tinggi Z, S = 2 simpan rat2 tinggi Z
- G30 P<0..3> - Periksa-Z pada titik yang sedang berlangsung. P = 1 pengukuran pertama, P = 2 pengukuran terakhir P = 0 atau 3 pengukuran pertama dan terakhir
- G31 - Tulis signal pada sensor periksa
- G32 S<0..2> P<0..1> - Autolevel papan cetak. S = 1 ukur tinggi Z, S = 2 ukur dan simpan tinggi Z baru
- G50 Rute kalibrasi SCARA
- G90 - Gunakan koordinat pasti
- G91 - Gunakan koordinat relatif
- G92 - Tetapkan posisi sekarang ke koordinat yang diberikan
- G131 - Tetapkan posisi offset extruder ke 0 - dibutuhkan untuk kalibrasi dengan G132
- G132 - Kalibrasi posisi endstop. Gunakan ini setelah gunakan G131 dan setelah tempatkan dudukan extruder ke titik tengah.
- G133 - Ukur langkah menuju endstop untuk delta. Dapat digunakan untuk mendeteksi langkah yang hilang dalam toleransi endstop.
- G134 Px Sx Zx - Kalibrasi perbedaan tinggi nozzle (butuh Periksa-Z dalam nozzle!) Px = extruder referensi, Sx = hanya ukur extruder x terhadap referensi, Zx = menambahkan jarak z yang diukur Sx untuk koreksi.

bagian M code
- M104 - Tetapkan target suhu extruder
- M105 - Baca suhu sekarang
- M106 S<kecepatan> P<kipas> - Kipas pada kecepatan = 0..255, P = 0 atau 1, 0 adalah bawaan dan dapat diabaikan
- M107 P<kipas> - Kipas mati, P = 0 atau 1, 0 adalah bawaan dan dapat diabaikan
- M109 - Tunggu suhu extruder mencapat suhu target.
- M114 - Perlihatkan posisi sekarang

M Code khusus

- M20  - Daftar kartu SD
- M21  - Mulai kartu SD
- M22  - Lepas kartu SD
- M23  - Pilih berkas SD (M23 namaberkas.g)
- M24  - Mulai/lanjutkan cetak SD
- M25  - Tunda cetak SD
- M26  - Tetapkan posisi SD dalam bytes (M26 S12345)
- M27  - Laporkan status cetak SD
- M28  - Mulai tulis SD (M28 namaberkas.g)
- M29  - Hentikan tulis SD
- M30 <namaberkas> - Hapus berkas pada kartu SD
- M32 <namadir> buat subdaftar
- M42 P<nomor pin> S<nilai 0..255> - Ganti keluaran pin P ke S. tidak bekerja pada pin yang penting.
- M80  - Nyalakan sumber listrik
- M81  - Matikan sumber listrik
- M82  - Tetapkan kode E pasti (bawaan)
- M83  - Tetapkan kode E relatif pada waktu dalam mode koordinat absolut(G90) 
- M84  - Matikan motor hingga langkah berikutnya,
        atau gunakan S<detik> untuk tentukan waktu tidak aktif setelah motor dimatikan.  S0 untuk menghentikan waktu.
- M85  - Tetapkan waktu matikan ketika tidak ada aktifitas dengan parameter S<detik>. Untuk mengentikan tetapkan nol (bawaan)
- M92  - Tetapkan axisStepsPerUnit - sama seperti G92
- M99 S<tundaDalamDetik> X0 Y0 Z0 - Matikan motor untuk S detik (bawaan 10) untuk sumbu yang diberikan.
- M104 S<suhu> T<extruder> P1 F1 - Tetapkan suhu tanpa tunggu. P1 = tunggu sampai gerakan berakhir, F1 = bunyi beep ketika suhu mencapai pertama kalinya
- M105 X0 - Dapatkan suhu. Jika X0 ditambahkan, nilai mentah analog juga ditulis.
- M112 - Matikan darurat
- M115- Deret kemampuan
- M116 - Tunggu sampai semua suhu dalam batasan +/- 1 derajat
- M117 <pesan> - Tulis pesan dalam baris status pada LCD
- M119 - Laporkan status endstop
- M140 S<suhu> F1 - Tetapkan suhu target papan, F1 bunyi beep ketika suhu mencapai pertama kalinya
- M163 S<NomorExtruderNum> P<berat>  - Tetapkan berat untuk mencampur extruder drive
- M164 S<virtNum> P<0 = jangan simpan eeprom,1 = simpan ke eeprom> - simpan berat sebagai extruder bayangan S
- M190 - Tunggu sampai suhu papan sekarang mencapai suhu target
- M200 T<extruder> D<diameter> - Gunakan pengeluaran berbasis volume. Tetapkan D0 atau abaikan D untuk hentikan pengeluaran berbasis volume. Abaikan T untuk extruder sekarang.
- M201 - Tetapkan percepatan max dalam unit/s^2 untuk gerakan cetak (M201 X1000 Y1000)
- M202 - Tetapkan percepatan max dalam unit/s^2 untuk gerakan pindah (M202 X1000 Y1000)
- M203 - Tetapkan pantauan suhu ke Sx
- M204 - Tetapkan parameter PID X => Kp Y => Ki Z => Kd S<extruder> Bawaan adalah extruder sekarang. NUM_EXTRUDER=Pemanas papan
- M205 - Keluaran pengaturan EEPROM
- M206 - Tetapkan nilai EEPROM
- M207 X<kedutan XY> Z<Kedutan Z> E<KedutanExtruder> - Ubah nilai kedutan sekarang, tetapi tidak simpan di eeprom.
- M209 S<0/1> - Nyalakan/matikan tarikan otomatis
- M220 S<Kelipatan kecepatan dalam persen> - Naikan/turunkan kecepatan yang diberikan
- M221 S<Kelipatan arus pengeluaran dalam persen> - Naikan/turunkan arus yang diberikan
- M226 P<pin> S<status 0/1> - Tuunggu sampai pin mendapat status S. Tambah X0 untuk mulai sebagai masukan tanpa menarik dan X1 untuk masukan dengan menarik.
- M231 S<OPS_MODE> X<Min_Distance> Y<Retract> Z<Backlash> F<ReatrctMove> - Tetapkan parameter OPS
- M232 - Baca dan ulangi nilai max lanjutan
- M233 X<AdvanceK> Y<AdvanceL> - Tetapkan nilai K lanjutan sementara ke X dan nilai L ke Y
- M251 Ukur langkah Z dari perhentian awal (Delta printers). S0 - Ulangi, S1 - Cetak, S2 - Simpan ke panjang Z (juga EEPROM jika dinyalakan)
- M280 S<mode> - Tetapkan mode cetak salinan. mode: 0 = mati, 1 = 1 extra extruder, 2 = 2 extra extruder, 3 = 3 extra extruders
- M281 Tes apakah watchdog berjalan dan bekerja. Gunakan M281 X0 untuk hentikan watchdog pada papan AVR. Terkadang dibutuhkan untuk papan dengan bootloaders lama untuk dapat digunakan kembali.
- M300 S<Frequensi> P<DurationMillis> mainkan frekuensi
- M302 S<0 atau 1> - perbolehkan pengeluaran dingin. Tanpa parameter S akan diperbolehkan. S1 untuk dilarang.
- M303 P<extruder/papan> S<suhuCetak> X0 R<pengulangan>- temukan otomatis nilai pid. Gunakan P<NUM_EXTRUDER> untuk pemanas papan. X0 simpan hasil di EEPROM. R adalah jumlah siklus.
- M320 S<0/1> - Nyalakan autolevel, S1 simpan dalam eeprom
- M321 S<0/1> - Matikan autolevel, S1 simpan dalam eeprom
- M322 - Ulangi matrix autolevel
- M323 S0/S1 nyalakan matikan koreksi penyimpangan P0 = tidak permanen, P1 = permanen = bawaan
- M340 P<servoId> S<pulseInUS> R<autoOffIn ms>: servoID = 0..3, Servos dikendalikan dengan getaran normalnya antara 500 dan 2500 dengan 1500ms dalam posisi tengah. 0 matikan servo. R membolehkan mematikan otomatis setelah beberapa saat.
- M350 S<mstepsAll> X<mstepsX> Y<mstepsY> Z<mstepsZ> E<mstepsE0> P<mstespE1> : tetapkan microstepping pada RAMBO board
- M355 S<0/1> - Nyalakan/matikan lampu, tidak ada S = laporkan status
- M360 - perlihatkan konfigurasi
- M400 - Tunggu sampai antrian gerakan kosong.
- M401 - Simpan posisi x, y dan z.
- M402 - Pindah ke posisi yang disimpan. Jika X, Y atau Z ditentukan, hanya koordinat ini yang dipakai. F mengubah kecepatan pada gerakan itu.
- M450 - Laporkan mode cetak
- M451 - Tetapkan mode cetak ke FFF
- M452 - Tetapkan mode cetak ke laser
- M453 - Tetapkan mode cetak ke CNC
- M460 X<minTemp> Y<maxTemp> : Tetapkan bentangan suhu agar thermistor mengendalikan kipas
- M500 Simpan pengaturan ke EEPROM
- M501 Ambil pengaturan dari EEPROM
- M502 Ulangi pengaturan ke yang ada di configuration.h. Tidak simipan nilai ke EEPROM!
- M513 - Bersihkan semua tanda macet.
- M600 Ganti filamen
- M601 S<1/0> - Tunda extruder. extrude yang ditunda mematikan pemanas dan motor. Membatalkan tunda memanaskan kembali extruder ke suhu yang lama.
- M602 S<1/0> P<1/0>- Debug kontrol macet (S) mematikan kontrol macet (P). Jika dinyalakan akan mencatat perubahan signal dan tidak akan memicu kesalahan macet!
- M908 P<alamat> S<nilai> : Tetaokan arus listrik motor untuk digipot (RAMBO board)
- M999 - Lanjutkan dari kesalahan fatal. M999 S1 akan membuat kesalahan fatal untuk pencobaan.

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

This firmware is based on Repetier-Firmware which based on Sprinter firmware 
which based on Tonokip RepRap firmware which based on Hydra-mmm firmware.

section GCodes 

 look here for descriptions of gcodes: http://linuxcnc.org/handbook/gcode/g-code.html
 and http://objects.reprap.org/wiki/Mendel_User_Manual:_RepRapGCodes

Implemented Codes

- G0  -> G1
- G1  - Coordinated Movement X Y Z E, S1 disables boundary check, S0 enables it
- G4  - Dwell S<seconds> or P<milliseconds>
- G5  - Rotation Movement X (Shoulder), Y (Elbow)
- G10 S<1 = long retract, 0 = short retract = default> retracts filament according to stored setting
- G11 S<1 = long retract, 0 = short retract = default> = Undo retraction according to stored setting
- G20 - Units for G0/G1 are inches.
- G21 - Units for G0/G1 are mm.
- G28 - Home all axis or named axis.
- G29 S<0..2> - Z-Probe at the 3 defined probe points. S = 1 measure avg. zHeight, S = 2 store avg zHeight
- G30 P<0..3> - Single z-probe at current position P = 1 first measurement, P = 2 Last measurement P = 0 or 3 first and last measurement
- G31 - Write signal of probe sensor
- G32 S<0..2> P<0..1> - Autolevel print bed. S = 1 measure zLength, S = 2 Measure and store new zLength
- G50 SCARA calibration route
- G90 - Use absolute coordinates
- G91 - Use relative coordinates
- G92 - Set current position to coordinates given
- G131 - set extruder offset position to 0 - needed for calibration with G132
- G132 - calibrate endstop positions. Call this, after calling G131 and after centering the extruder holder.
- G133 - measure steps until max endstops for deltas. Can be used to detect lost steps within tolerances of endstops.
- G134 Px Sx Zx - Calibrate nozzle height difference (need z probe in nozzle!) Px = reference extruder, Sx = only measure extrude x against reference, Zx = add to measured z distance for Sx for correction.

RepRap M Codes

- M104 - Set extruder target temp
- M105 - Read current temp
- M106 S<speed> P<fan> - Fan on speed = 0..255, P = 0 or 1, 0 is default and can be omitted
- M107 P<fan> - Fan off, P = 0 or 1, 0 is default and can be omitted
- M109 - Wait for extruder current temp to reach target temp.
- M114 - Display current position

Custom M Codes

- M20  - List SD card
- M21  - Init SD card
- M22  - Release SD card
- M23  - Select SD file (M23 filename.g)
- M24  - Start/resume SD print
- M25  - Pause SD print
- M26  - Set SD position in bytes (M26 S12345)
- M27  - Report SD print status
- M28  - Start SD write (M28 filename.g)
- M29  - Stop SD write
- M30 <filename> - Delete file on sd card
- M32 <dirname> create subdirectory
- M42 P<pin number> S<value 0..255> - Change output of pin P to S. Does not work on most important pins.
- M80  - Turn on power supply
- M81  - Turn off power supply
- M82  - Set E codes absolute (default)
- M83  - Set E codes relative while in Absolute Coordinates (G90) mode
- M84  - Disable steppers until next move,
        or use S<seconds> to specify an inactivity timeout, after which the steppers will be disabled.  S0 to disable the timeout.
- M85  - Set inactivity shutdown timer with parameter S<seconds>. To disable set zero (default)
- M92  - Set axisStepsPerUnit - same syntax as G92
- M99 S<delayInSec> X0 Y0 Z0 - Disable motors for S seconds (default 10) for given axis.
- M104 S<temp> T<extruder> P1 F1 - Set temperature without wait. P1 = wait for moves to finish, F1 = beep when temp. reached first time
- M105 X0 - Get temperatures. If X0 is added, the raw analog values are also written.
- M112 - Emergency kill
- M115- Capabilities string
- M116 - Wait for all temperatures in a +/- 1 degree range
- M117 <message> - Write message in status row on lcd
- M119 - Report endstop status
- M140 S<temp> F1 - Set bed target temp, F1 makes a beep when temperature is reached the first time
- M163 S<extruderNum> P<weight>  - Set weight for this mixing extruder drive
- M164 S<virtNum> P<0 = dont store eeprom,1 = store to eeprom> - Store weights as virtual extruder S
- M190 - Wait for bed current temp to reach target temp.
- M200 T<extruder> D<diameter> - Use volumetric extrusion. Set D0 or omit D to disable volumetric extr. Omit T for current extruder.
- M201 - Set max acceleration in units/s^2 for print moves (M201 X1000 Y1000)
- M202 - Set max acceleration in units/s^2 for travel moves (M202 X1000 Y1000)
- M203 - Set temperture monitor to Sx
- M204 - Set PID parameter X => Kp Y => Ki Z => Kd S<extruder> Default is current extruder. NUM_EXTRUDER=Heated bed
- M205 - Output EEPROM settings
- M206 - Set EEPROM value
- M207 X<XY jerk> Z<Z Jerk> E<ExtruderJerk> - Changes current jerk values, but do not store them in eeprom.
- M209 S<0/1> - Enable/disable autoretraction
- M220 S<Feedrate multiplier in percent> - Increase/decrease given feedrate
- M221 S<Extrusion flow multiplier in percent> - Increase/decrease given flow rate
- M226 P<pin> S<state 0/1> - Wait for pin getting state S. Add X0 to init as input without pullup and X1 for input with pullup.
- M231 S<OPS_MODE> X<Min_Distance> Y<Retract> Z<Backlash> F<ReatrctMove> - Set OPS parameter
- M232 - Read and reset max. advance values
- M233 X<AdvanceK> Y<AdvanceL> - Set temporary advance K-value to X and linear term advanceL to Y
- M251 Measure Z steps from homing stop (Delta printers). S0 - Reset, S1 - Print, S2 - Store to Z length (also EEPROM if enabled)
- M280 S<mode> - Set ditto printing mode. mode: 0 = off, 1 = 1 extra extruder, 2 = 2 extra extruder, 3 = 3 extra extruders
- M281 Test if watchdog is running and working. Use M281 X0 to disable watchdog on AVR boards. Sometimes needed for boards with old bootloaders to allow reflashing.
- M300 S<Frequency> P<DurationMillis> play frequency
- M302 S<0 or 1> - allow cold extrusion. Without S parameter it will allow. S1 will disallow.
- M303 P<extruder/bed> S<printTemerature> X0 R<Repetitions>- Autodetect pid values. Use P<NUM_EXTRUDER> for heated bed. X0 saves result in EEPROM. R is number of cycles.
- M320 S<0/1> - Activate autolevel, S1 stores it in eeprom
- M321 S<0/1> - Deactivate autolevel, S1 stores it in eeprom
- M322 - Reset autolevel matrix
- M323 S0/S1 enable disable distortion correction P0 = not permanent, P1 = permanent = default
- M340 P<servoId> S<pulseInUS> R<autoOffIn ms>: servoID = 0..3, Servos are controlled by a pulse with normally between 500 and 2500 with 1500ms in center position. 0 turns servo off. R allows automatic disabling after a while.
- M350 S<mstepsAll> X<mstepsX> Y<mstepsY> Z<mstepsZ> E<mstepsE0> P<mstespE1> : Set microstepping on RAMBO board
- M355 S<0/1> - Turn case light on/off, no S = report status
- M360 - show configuration
- M400 - Wait until move buffers empty.
- M401 - Store x, y and z position.
- M402 - Go to stored position. If X, Y or Z is specified, only these coordinates are used. F changes feedrate fo rthat move.
- M450 - Reports printer mode
- M451 - Set printer mode to FFF
- M452 - Set printer mode to laser
- M453 - Set printer mode to CNC
- M460 X<minTemp> Y<maxTemp> : Set temperature range for thermistor controlled fan
- M500 Store settings to EEPROM
- M501 Load settings from EEPROM
- M502 Reset settings to the one in configuration.h. Does not store values in EEPROM!
- M513 - Clear all jam marker.
- M600 Change filament
- M601 S<1/0> - Pause extruders. Paused extrudes disable heaters and motor. Unpausing reheats extruder to old temp.
- M602 S<1/0> P<1/0>- Debug jam control (S) Disable jam control (P). If enabled it will log signal changes and will not trigger jam errors!
- M908 P<address> S<value> : Set stepper current for digipot (RAMBO board)
- M999 - Continue from fatal error. M999 S1 will create a fatal error for testing.
*/

#include "Wangsamas.h"
#include <SPI.h>

#if UI_DISPLAY_TYPE == DISPLAY_ARDUINO_LIB
//#include <LiquidCrystal.h> // Uncomment this if you are using liquid crystal library
#endif

void setup()
{
    Printer::setup();
}

void loop()
{
    Commands::commandLoop();
}








