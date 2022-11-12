int stateLED0 = LOW;

void setup() {
  
  pinMode(13, OUTPUT);

}

void loop() {
  
  digitalWrite(13, stateLED0);
  delay(150);
  digitalWrite(13, !stateLED0);
  delay(150);

}
