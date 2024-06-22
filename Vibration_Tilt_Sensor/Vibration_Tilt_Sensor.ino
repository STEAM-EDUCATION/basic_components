#define sensorPin 7

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Analog output: ");
  int sensorValue = analogRead(sensorPin);  // Read the analog value from sensor
  Serial.println(sensorValue);
  delay(500);
}
