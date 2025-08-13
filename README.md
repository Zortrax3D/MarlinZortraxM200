

<p align="center">
  <img src="https://forum.zortrax.com/uploads/default/original/1X/f77bb4e0909f59450f8570794cb68e2ca45f7fba.png" alt="Zortrax Logo" />
</p>

<h1 align="center">Marlin 3D Printer Firmware<br>Official Zortrax M200 & M300 Fork</h1>


<p align="center">
    <a href="/LICENSE"><img alt="GPL-V3.0 License" src="https://img.shields.io/github/license/marlinfirmware/marlin.svg"></a>
    <a href="https://github.com/MarlinFirmware/Marlin"><img alt="Original Marlin Repository" src="https://img.shields.io/badge/Original%20Marlin-Repository-blue"></a>
</p>

---

## About This Fork

This is the **official fork of Marlin 2.1.x for Zortrax M200 and M300 3D printers**. It is based on the [MarlinFirmware/Marlin](https://github.com/MarlinFirmware/Marlin) project and maintained for the Zortrax community.

- **Original Marlin repository:** [https://github.com/MarlinFirmware/Marlin](https://github.com/MarlinFirmware/Marlin)
- **Official Zortrax Marlin builds:**
  - [M200](https://support.zortrax.com/downloads/firmware/?printers=m200)
  - [M300](https://support.zortrax.com/downloads/firmware/?printers=m300)
- **Discussion and support:** [Zortrax Forum Thread](https://forum.zortrax.com/t/m200-m300-marlin-2-1-x-firmware-release/14264)


---

Additional documentation can be found at the [Marlin Home Page](//marlinfw.org/).
Please test this firmware and let us know if it misbehaves in any way. 

---
## Serial communication
To connect serial user interface (Octo Print or other using Raspberry PI or UART converter and PC) you can use debug header on the motherboard. You will need to solder connector by yourself.

Pinout of the **DEBUG** header described below:
-	NRST
-	**GND <--- connect to GND on host**
-	TMS
-	TCK
-	**TX <--- connect to RX on host**
-	**RX <--- connect to TX on host**
-	NC
-	VCC (marked on mainboard as 3.3V)

**Set baudrate to 250000**

**Caution**: if you are going to use debugger, know that any attempt to read or write from/to flash memory will result in mass erase of the flash. It will erase the the bootloader and all the settings, including lifetimer, serial number and hardware version, as flash memory of chip is read out protection enabled at production! If that happens you won't be able to use official firmware anymore!

---

## Configurations 

Official configuration files for Zortrax M200 and M300 printers:

- [Zortrax Marlin Configurations Repository](https://github.com/Zortrax3D/MarlinConfigurationsZortraxM200)

## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.
