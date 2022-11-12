unsigned long prev_Time_T1 = millis();
unsigned long prev_Time_T2 = millis();

long interval_T1 = 200;
long interval_T2 = 2000;

int LED1_state = LOW;
int LED2_state = LOW;

void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}
void loop() {
  unsigned long currentTime = millis();
  //Task1

  if (currentTime - prev_Time_T1 > interval_T1){
    LED1_state = !LED1_state;
    digitalWrite(13, LED1_state);

    prev_Time_T1 = currentTime;
  }
  //Task2

  if (currentTime - prev_Time_T2 > interval_T2){
    LED2_state = !LED2_state;
    digitalWrite(12, LED2_state);

    prev_Time_T2 = currentTime;
  }

}
