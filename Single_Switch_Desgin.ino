int temp;
int a;
int b;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,INPUT);
pinMode(12,OUTPUT);
a=0;
b=a;
Serial.print(a);
Serial.print(b);
}

void loop() {
  // put your main code here, to run repeatedly:

a=digitalRead(13);
//Serial.print(a);
delay(100);
if(b!=a)
{
  digitalWrite(12,a);
  //Serial.print("enter the loop");
  b=a;
  delay(1000);
}
if(Serial.available()>0)
{
  temp=Serial.read();
  if(temp=='1')
  {
    digitalWrite(12,HIGH);
  }
  else if(temp=='0')
  {
    digitalWrite(12,LOW);
  }
}
}
