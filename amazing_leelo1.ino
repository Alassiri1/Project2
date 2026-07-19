#include <Servo.h>

Servo myServos[4];

const int servoPins[4] = {3, 5, 6, 9};

void setup() {
  for (int i = 0; i < 4; i++) {
    myServos[i].attach(servoPins[i]);
    myServos[i].write(0);
  }
  delay(500); //   

  unsigned long startTime = millis();
  
  while (millis() - startTime < 2000) {
    
    for (int pos = 0; pos <= 180; pos += 5) {
      if (millis() - startTime >= 2000) break; 
      for (int i = 0; i < 4; i++) {
        myServos[i].write(pos);
      }
      delay(15); 
    }
    
    for (int pos = 180; pos >= 0; pos -= 5) {
      if (millis() - startTime >= 2000) break;  
      for (int i = 0; i < 4; i++) {
        myServos[i].write(pos);
      }
      delay(15);
    }
  }

  for (int i = 0; i < 4; i++) {
    myServos[i].write(90);
  }
}

void loop() {
}