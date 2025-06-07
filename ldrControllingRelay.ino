#define ldrPin A0
#define led 13
int value;
void setup() {
  
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  value = analogRead(ldrPin);
  Serial.println(value);
  if(value<=50)
  {
    digitalWrite(led,HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(led,LOW);
    delay(500);
  }

}
