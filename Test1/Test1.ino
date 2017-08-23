
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int state = 0;
int flag = 0;


// the setup routine runs once when you press reset:
void setup() {               
  pinMode(led, OUTPUT); 
  digitalWrite (led, LOW);
  Serial.begin (9600);
}

// the loop routine runs over and over again forever:
void loop() {
  if(Serial.available()>0){
    state = Serial.read();
    flag = 0;
  }
  
  if (state == '0'){
  digitalWrite(led, LOW);   
  if (flag =='0'){
    Serial.println("LED: off");
    flag=1;
  }    
}

else if (state =='1'){
    digitalWrite(led, HIGH);   
    if (flag =='0'){
    Serial.println("LED: on");
    flag=1;
    }
  }
}  
