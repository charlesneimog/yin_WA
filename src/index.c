#include "utilities.h"
#include "Yin.h"

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

// PITCH DETECTION FROM YIN
float EMSCRIPTEN_KEEPALIVE yinPitchDetector(float *sound, int windowSize, int sampleRate){
    int buffer_length = windowSize;  
    Yin yin;
    float pitch;

     while (pitch < 10) {
        Yin_init(&yin, buffer_length, 0.05);
        pitch = Yin_getPitch(&yin, sound);
        buffer_length++;
    }
    return pitch;
}
