const int buttonPin = 2; 
int buttonState = 0;

void setup(){
  pinMode(buttonPin, INPUT);
  Serial.begin(115200);
}
  
void loop (){
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
}
