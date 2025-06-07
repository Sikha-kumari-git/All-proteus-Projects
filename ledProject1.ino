#define row1 13
#define row2 12
#define row3 11

void setup() {
  pinMode(row1,OUTPUT);
  pinMode(row2,OUTPUT);
  pinMode(row3,OUTPUT);

}

void loop() {
  
  
  for(int i = 0; i<5; i++)
  {
  allOn();
  allOff();
 
  }
  for(int i = 0; i<3; i++)
  {
  topToBottom(200);
  bottomToTop(200);
  }
 }

void allOn()
{
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  delay(300);
}

void allOff()
{
  digitalWrite(row1,LOW);
  digitalWrite(row2,LOW);
  digitalWrite(row3,LOW);
  delay(300);
}

void topToBottom(int t)
{
  digitalWrite(row1,HIGH);
  delay(t);
  digitalWrite(row1,LOW);
  delay(t);
  digitalWrite(row2,HIGH);
  delay(t);
  digitalWrite(row2,LOW);
  delay(t);
  digitalWrite(row3,HIGH);
  delay(t);
  digitalWrite(row3,LOW);
  delay(t);
  
}

void bottomToTop(int t)
{
  digitalWrite(row3,HIGH);
  delay(t);
  digitalWrite(row3,LOW);
  delay(t);
  digitalWrite(row2,HIGH);
  delay(t);
  digitalWrite(row2,LOW);
  delay(t);
  digitalWrite(row1,HIGH);
  delay(t);
  digitalWrite(row1,LOW);
  delay(t);

}
