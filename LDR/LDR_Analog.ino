#define sensorPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Analog output: ");
  int sensorValue = analogRead(sensorPin);  // Read the analog value from sensor
  int outputValue = map(sensorValue, 0, 1023, 255, 0);
  Serial.println(outputValue);
  delay(500);
}
