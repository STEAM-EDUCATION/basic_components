const int LED = 12; 

void setup(){
  pinMode(LED, OUTPUT); // Set LED - pin 12 as an output
}

void loop(){
  digitalWrite(LED,HIGH); // LED on
  delay(1000);
  digitalWrite(LED,LOW); // LED off
  delay(1000);
}
