#define lamp 13
#define fan 12
#define led 11
#define buzzer 10
String text = "";
char c;

void setup() {
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(fan,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  while(Serial.available())
  {
    c = Serial.read();
    text = text+c;
    delay(15);
  }
if(text == "Sare chalu")
{
  digitalWrite(lamp,HIGH);
  digitalWrite(fan,HIGH);
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
}
else if(text == "Sare band")
{
  digitalWrite(lamp,LOW);
  digitalWrite(fan,LOW);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);

}
text = "";
}
