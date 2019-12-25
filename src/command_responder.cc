/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "command_responder.h"
#include <M5Stack.h>
#include <Avatar.h>

using namespace m5avatar;
Avatar avatar;

void InitResponder() {
  M5.begin();
  M5.Lcd.fillScreen(BLACK);
  avatar.init();
  avatar.setExpression(Expression::Sleepy);
}

void RespondToCommand(tflite::ErrorReporter* error_reporter,
                      int32_t current_time, const char* found_command,
                      uint8_t score, bool is_new_command) {
  static int32_t last_timestamp = 0;
  if (is_new_command) {
    Expression exp = Expression::Sleepy;

    error_reporter->Report("Heard %s (%d) @%dms", found_command, score,
                           current_time);
    if (strcmp(found_command, "yes") == 0) {
      exp = Expression::Happy;
      avatar.setSpeechText("Yes!");
    } else if (strcmp(found_command, "no") == 0) {
      exp = Expression::Sad;
      avatar.setSpeechText("No!");
    } else if (strcmp(found_command, "unknown") == 0) {
      exp = Expression::Doubt;
      avatar.setSpeechText("?");
    } else if (strcmp(found_command, "silence") == 0) {
      exp = Expression::Sleepy;
      avatar.setSpeechText("zzz...");
    }
    avatar.setExpression(exp);
    last_timestamp = current_time;
  } else {
    if ((current_time - last_timestamp) > 2000) {
      avatar.setSpeechText("");
      avatar.setExpression(Expression::Neutral);
    }
  }
}
