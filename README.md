# TensorFlow Micro Speech demo for M5Stack FIRE

M5Stack port of [micro-speech demo](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/lite/micro/examples/micro_speech). Say "yes" or "no" to your M5Stack. M5stack would change its facial expression according to your words.

M5Stack is an ESP32-based module with TFT LCD and analog MEMS microphone.  
This port uses Arduino-based [M5Stack library](https://github.com/m5stack/M5Stack) on [PlatformIO](https://platformio.org/). I have tested this on my [M5Stack FIRE](https://docs.m5stack.com/#/en/core/fire), but [M5GO](https://docs.m5stack.com/#/en/core/m5go_lite) would also work.

Most of the source files on this repository are derived from TensorFlow repository using   
```make -f tensorflow/lite/micro/tools/make/Makefile TARGET=esp generate_micro_speech_esp_project```  
excepting `audio_provider.cc`, `command_responder.cc`, `command_responder.h` and `main.cpp`.

[M5Stack-Avatar](https://github.com/meganetaaan/m5stack-avatar) library is used (but not included) for drawing a face on the LCD.

Since M5Stack's internal microphone is always picking up noise from the internal speaker, you should speak LOUDLY to your M5Stack. I'm sorry it may be annoying for people near you...

Visit [my blog entry](https://blog.boochow.com/article/m5stack-tflite-micro-speech.html) for details and demonstration video. (Sorry the article is in Japanese)
