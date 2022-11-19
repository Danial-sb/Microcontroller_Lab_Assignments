//Initializing LED Pin
int led_pin = 6;
void setup() {
  //Declaring LED pin as output
  pinMode(led_pin, OUTPUT);
}
void loop() {
  analogWrite(led_pin,0);
  delay(5);
  analogWrite(led_pin,20);
  delay(5);
  analogWrite(led_pin,50);
  delay(5);
  analogWrite(led_pin,200);
  delay(5);
  analogWrite(led_pin,0);
  delay(5);
  analogWrite(led_pin,150);
  delay(5);
}