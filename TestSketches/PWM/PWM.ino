/*

*/


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  analogWrite(PWM1, 200);
  analogWrite(PWM0, 255/2);

  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  delay(1000);
}
