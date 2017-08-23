

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;



// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, OUTPUT);
  digitalWrite (led, LOW);
  Serial.begin (9600);
}

// the loop routine runs over and over again forever:
void loop() {
  char input;

  if (Serial.available() > 0) {
    input = Serial.read();
    if (input == '0') {
      digitalWrite (led, LOW);
    }
    else if (input == '1') {
      digitalWrite (led, HIGH);
    }
    else {
      Serial.println ("Bitte 0 oder 1");
    }
  }
}
