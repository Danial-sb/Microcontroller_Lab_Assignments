void setup() {

  for (int pin = 6; pin < 14; pin++) {
    pinMode(pin, OUTPUT);
  }

  pinMode(0, INPUT);

}
void loop () {

  int BUTTONstate = digitalRead(0);

  if(BUTTONstate == LOW) {

    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);

  }
  else {
    
     for (int pin = 6; pin < 14; pin++){
       digitalWrite(pin, LOW);
       
     }   
  }
  }
