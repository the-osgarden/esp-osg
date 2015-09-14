#Welcome!

To work with this code, you will need to be able to compile [these tools](https://github.com/esp8266/esp8266-wiki/wiki/Toolchain). In addition, to work with c++ you will need to check out a different version of the crosstool-ng codebase, rather than the version that esp8266 has on their wiki:

```bash
cd /opt/Espressif
git clone -b lx106-g++ git://github.com/jcmvbkbc/crosstool-NG.git
cd crosstool-NG 
./bootstrap && ./configure --prefix=`pwd` && make && make install
./ct-ng xtensa-lx106-elf
./ct-ng build
```

In order to use the new compiler, you will want to put the executables into your path statement somewhere. I put this at the end of ~/.bashrc:

```bash
PATH=/opt/Espressif/crosstool-NG/builds/xtensa-lx106-elf/bin:$PATH
```


./ct-ng menuconfig

The code that is currently in the system is dependent on the Arduino library, so make sure that is installed as well. 



http://www.esp8266.com/viewtopic.php?f=9&t=224&start=10

http://www.esp8266.com/viewtopic.php?f=9&t=478