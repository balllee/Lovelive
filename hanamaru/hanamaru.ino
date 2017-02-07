#include <Keyboard.h>
int key = 97;
int num = 9;
void setup() {
  for(int i = 0;i < num;i++){
    pinMode(i + 2,INPUT_PULLUP);
  }
  Keyboard.begin();
}

void loop() {
  for(int i = 0;i < num;i++){
    if(digitalRead(i+2) == LOW){
      Keyboard.press(key + i);
    }
    if(digitalRead(i+2) == HIGH){
      Keyboard.release(key + i);
    }
  }
}
