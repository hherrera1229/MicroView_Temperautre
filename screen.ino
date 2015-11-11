// We need to include MicroView library in our project
#include <MicroView.h>

void setup() {
  uView.begin();
  uView.clear(PAGE);
  Serial.begin(9600);
}

void loop() {
  String a;
  if (Serial.available()) {
    a = Serial.readString();
    uView.setFontType(1); 
    uView.clear(PAGE);
    uView.setCursor(0,16);
    uView.print(a);
    uView.display();
  }
  delay(1000);
}
