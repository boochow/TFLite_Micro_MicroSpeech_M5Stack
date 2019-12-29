# TensorFlow Micro Speech demo for M5Stack FIRE

M5StickC port of [micro-speech demo](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/lite/micro/examples/micro_speech).

M5StickC is an ESP32-based module with TFT LCD and digital MEMS microphone.  
This port uses Arduino-based [M5StickC library](https://github.com/m5stack/M5StickC) on [PlatformIO](https://platformio.org/). 

Most of the source files on this repository are derived from TensorFlow repository using   
```make -f tensorflow/lite/micro/tools/make/Makefile TARGET=esp generate_micro_speech_esp_project```  
excepting `audio_provider.cc`, `command_responder.cc`, `command_responder.h` and `main.cpp`.

Visit [my blog entry](https://blog.boochow.com/article/m5stickc-tflite-micro-speech.html) for details and demonstration video. (Sorry the article is in Japanese)
