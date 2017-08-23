#include <SoftwareSerial.h>

SoftwareSerial btSerial(2, 3); // RX, TX


// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;



// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, OUTPUT);
  digitalWrite (led, LOW);
  Serial.begin (9600);
  btSerial.begin (115200);
  btSerial.write ("---");
  btSerial.begin (9600);

}

// the loop routine runs over and over again forever:
void loop() {
  char input;

  if (btSerial.available() > 0) {
    input = btSerial.read();
    Serial.write(input);
  }
  if (Serial.available() > 0) {
    input = Serial.read();
    btSerial.write(input);
    Serial.write(input);
  }

}
