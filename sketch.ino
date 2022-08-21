int S1_pin = 11;
int O_pin = 12;
int S2_pin = 13;
int delayTime = 1000;
void setup()
{
  pinMode(S1_pin, OUTPUT);
  pinMode(O_pin, OUTPUT);
  pinMode(S2_pin, OUTPUT);
}
void loop()
{  
    digitalWrite(S1_pin, HIGH);
    delay(delayTime);
    digitalWrite(S1_pin, LOW);
    digitalWrite(O_pin, HIGH);
    delay(delayTime);
    digitalWrite(O_pin, LOW);
    digitalWrite(S2_pin, HIGH);
    delay(delayTime);
    for (int i = 0; i<4; i++){
      digitalWrite(S1_pin, HIGH);
      digitalWrite(O_pin, HIGH);
      digitalWrite(S2_pin, HIGH);
      delay(delayTime);
      digitalWrite(S1_pin, LOW);
      digitalWrite(O_pin, LOW);
      digitalWrite(S2_pin, LOW);
      delay(delayTime);
    }
    digitalWrite(S1_pin, LOW);
    digitalWrite(O_pin, LOW);
    digitalWrite(S2_pin, LOW);
}