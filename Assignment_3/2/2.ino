const int pwm = 2 ;
const int in_1 = 9 ;
const int in_2 = 8 ;

void setup() {
   pinMode(pwm,OUTPUT) ;
   pinMode(in_1,OUTPUT) ;
   pinMode(in_2,OUTPUT) ;
}

void loop() {
  //For Clock-wise motion - IN_1 = HIGH , IN_2 = LOW
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,LOW) ;
   analogWrite(pwm,255) ;
   delay(200) ;
   analogWrite(pwm,0) ;
   delay(200) ;
   analogWrite(pwm,120) ;
   delay(200) ;
   analogWrite(pwm,0) ;
   delay(200) ;
   analogWrite(pwm,255) ;
   delay(200) ;
   
}
