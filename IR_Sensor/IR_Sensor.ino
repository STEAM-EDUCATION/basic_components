int sensorPin = 9;

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT);
}

void loop() {
  Serial.print("Digital output: ");
  int sensorValue = digitalRead(sensorPin);  // Read the analog value from sensor
  Serial.println(sensorValue);
}
