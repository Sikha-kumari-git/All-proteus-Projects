#define ldrPin A0
int value;
void setup() {
 
 Serial.begin(9600);
 pinMode(ldrPin, INPUT);
 
}

void loop() {
   
value = analogRead(ldrPin);
Serial.println(value);

}
