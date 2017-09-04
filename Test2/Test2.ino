

int led1 = 9;
int led2 = 10;


void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  Serial.begin (9600);
}

void loop() {
  char input;

  if (Serial.available()  > 0) {
    input = Serial.read();
    if (input == "Tara") {
      digitalWrite (led1, HIGH);
      delay (500);
      digitalWrite (led1, LOW);
    }
    else if (input == "Weight") {
      digitalWrite (led2, HIGH);
      delay (500);
      digitalWrite (led2, LOW);
    }
    else {
    }
  }
}
