/*

*/

int statLED = 19;

void setup() {
  pinMode(statLED, OUTPUT);

}


void loop() {
  digitalWrite(statLED, HIGH);
  delay(1000); 
  digitalWrite(statLED, LOW);
  delay(1000);
}
