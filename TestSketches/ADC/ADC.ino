/*

*/

#define ANALOG_RESOLUTION pow(2, 14);

void setup()
{
  Serial.begin(115200);
  Serial.println("Read example");

  pinMode(LED_BUILTIN, OUTPUT);

  analogReadResolution(14); //Set resolution to 14 bit
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);

  int myAnalog0 = analogRead(A0);
  float myVoltage0 = myAnalog0 * 3.3 / ANALOG_RESOLUTION;
  Serial.print("A0 voltage: ");
  Serial.print(myVoltage0, 3);

  int myAnalog1 = analogRead(A1);
  float myVoltage1 = myAnalog1 * 3.3 / ANALOG_RESOLUTION;
  Serial.print("\tA1 voltage: ");
  Serial.print(myVoltage1, 3);

  int battvin = analogRead(BATTVIN3);
  Serial.print("\tbattvin: ");
  Serial.print(battvin);
  float battVoltage = battvin * 3.3 / ANALOG_RESOLUTION;
  Serial.print("\tBatt voltage: ");
  Serial.print(battVoltage, 3);

  //Serial.print("\tinternalTemp: ");
  //Serial.print(getTemperature(), 2);

  Serial.println();

  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
}
