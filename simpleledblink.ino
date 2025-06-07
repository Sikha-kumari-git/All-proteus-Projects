#define row1 13
#define row2 12
#define row3 11

void setup() {

pinMode(row1,OUTPUT);
pinMode(row2,OUTPUT);
pinMode(row3,OUTPUT);
}

void loop() {
digitalWrite(row1,HIGH);
delay(300);
digitalWrite(row1,LOW);
delay(300);
digitalWrite(row2,HIGH);
delay(300);
digitalWrite(row2,LOW);
delay(300);
digitalWrite(row3,HIGH);
delay(300);
digitalWrite(row3,HIGH);
delay(300);
digitalWrite(row3,LOW);
delay(300);
}


