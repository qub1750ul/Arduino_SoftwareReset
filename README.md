# Arduino Software Reset

Compatible architecture: AVR

# Description
This library allow to reset an Arduino board from the sketch in three different modes:

- STANDARD    : reset using watchdog timer ( recommended )
- ALTERNATIVE : reset by "manually" restoring register values ( for MCU with bootloader that doesn't support WDT )
- SKETCH      : simply restarts the sketch

# Sintax & short command reference

*softwareReset(mode);* : perform the software reset, **mode** can be **STANDARD**, **ALTERNATIVE** or **SKETCH**

# About the author & license info

Created by ***Giuseppe Masino, 20 aug 2016***
Author URL http://www.facebook.com/peppe.masino1

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a><br />This work by <a xmlns:cc="http://creativecommons.org/ns#" href="https://github.com/HackerInside0/Arduino_L293.git" property="cc:attributionName" rel="cc:attributionURL">Giuseppe Masino</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a>.<br />Permissions beyond the scope of this license may be available at <a xmlns:cc="http://creativecommons.org/ns#" href="https://facebook.com/peppe.masino1" rel="cc:morePermissions">https://facebook.com/peppe.masino1</a>.