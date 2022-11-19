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
   delay(2000) ;
   //For brake
   digitalWrite(in_1,LOW) ;
   delay(1000) ;
   //For Anti Clock wise motion , in_1 = LOW , in_2 = HIGH
   digitalWrite(in_1,LOW) ;
   digitalWrite(in_2,HIGH) ;
   delay(2000) ;
    //For brake
   digitalWrite(in_2,LOW) ;
   delay(1000) ;    
}
