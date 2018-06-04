# Arduino Software Reset

![Project status badge](https://img.shields.io/badge/Project%20status-ACTIVE-brightgreen.svg)
[![License badge](https://img.shields.io/badge/license-custom%20CC%20BY--SA%204.0-brightgreen.svg)](https://github.com/qub1750ul/Arduino_SoftwareReset/blob/master/LICENSE.md)  
[![Arduino Library specification badge](https://img.shields.io/badge/Arduino%20Library%20Specification%20-rev.%202.1-blue.svg)](https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.5:-Library-specification)
[![Arduino IDE compatibility badge](https://img.shields.io/badge/Arduino%20IDE%20compatibility-1.6.10+-blue.svg)](https://www.arduino.cc/en/Main/Software)  
[![Keep a Changelog specification badge](https://img.shields.io/badge/Keep%20a%20Changelog%20Specification-1.0.0-orange.svg)](http://keepachangelog.com)
[![Semantic Versioning specification badge](https://img.shields.io/badge/Semantic%20Versioning%20Specification-2.0.0-orange.svg)](http://semver.org)


Compatible architecture: AVR

# Description
This library allow to reset an Arduino board from the sketch using two methods:

- **STANDARD** : reset using watchdog timer ( full-reset - recommended )
- **SIMPLE** : simply restarts the program

# Documentation

```c++
softwareReset::standard() ;	// Reset using the standard method
softwareReset::simple()		;	// Restart the program
```

# About the author & license info

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">
<img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" />
</a>
<br />
<span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">The Arduino Software Reset Library</span> by <a xmlns:cc="http://creativecommons.org/ns#" href="https://github.com/qub1750ul/Arduino_SoftwareReset" property="cc:attributionName" rel="cc:attributionURL">Giuseppe Masino</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a> and also under the following terms:  

The softwares, source files, schematics and all other material are provided "AS IS", without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular scope and noninfringement.   

In no event shall me and/or other peopole that holds the rights and/or are implied in the creation and distribution of the above mentioned things be liable for any claim, damages or other liability, whether in an action of contract, tort or otherwise, arising form, out of or in connection with the above mentioned things or the use or other dealings in it.  

The above copyright notice and this permission notice shall accompany and/or be included ( depending on the type of work ) in all the derived works from mine, as addendum to compliance with the provisions above.  
