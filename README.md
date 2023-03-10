### WebAssembly from C/Cpp


This is a simple code to implement yin pitch detector, it is based on the code of [ashokfernandez](https://github.com/ashokfernandez/Yin-Pitch-Tracking) and [JorenSix](https://github.com/JorenSix/Pidato) and all the recent forks and updates (2023) from [ashokfernandez](https://github.com/ashokfernandez/Yin-Pitch-Tracking).

### Build

Before run `make` you need to install the [emscripten](https://emscripten.org/docs/getting_started/downloads.html). Always when you want to compile it, you need to run 
```
source ./emsdk_env.sh
```
**Obs**: 
  1. The path of `emsdk_env.sh` depends of your instalation folder.
  2. On Windows, run `emsdk_env.bat` instead of `source ./emsdk_env.sh`.
  
After this steps, you can run `make` or 
```
emcc -o public/CFunctions.js $(C_FILES) -O3 -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"
```
on Windows.

### License

The software is licensed under the GPL since the Yin code is based on the GPL’d TarsosDSP Java implementation which is in turn based on the aubio implementation in `C` by Paul Brossier, also under the GPL.


