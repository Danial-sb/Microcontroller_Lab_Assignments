void setup() {

  for (int pin = 6; pin < 14; pin++) {
    pinMode(pin, OUTPUT);
  }

  pinMode(1, INPUT);

}

void loop() {

  int BUTTONstate = digitalRead(1);

  if (BUTTONstate == LOW){
    
    for (int pin = 6; pin < 14; pin++){
      digitalWrite(pin, HIGH);
    }

    delay(500);

    for (int pin = 6; pin < 14; pin++){
      digitalWrite(pin, LOW);
    }

    delay(500);
}
  else{
  
    for (int pin = 6; pin < 14; pin++){
      digitalWrite(pin, LOW);
    }

}
}
