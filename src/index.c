#include "utilities.h"
#include "Yin.h"

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

// PITCH DETECTION FROM YIN
float EMSCRIPTEN_KEEPALIVE C_yinPitchDetector(float sound[], int windowSize, int sampleRate){
   int buffer_length = windowSize;  
   Yin yin;
   float pitch;
   float newSound[buffer_length];

   // copy the sound array into a new array
   for (int i = 0; i < buffer_length; i++) {
      newSound[i] = sound[i];
   }

   // initialise the yin object
   Yin_init(&yin, buffer_length, 0.05);

   // calculate the pitch
   while (pitch < 10 ) {
      pitch = Yin_getPitch(&yin, newSound);	
      buffer_length++;
   }

   return pitch;
}
