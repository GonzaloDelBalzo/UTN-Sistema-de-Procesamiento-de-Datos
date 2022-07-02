int Led_Pin1=5;
int Led_Pin2=12;
int Led_Pin3=13;
int buttonState=0;

void setup()
{
  pinMode(2,INPUT);
  pinMode(Led_Pin1,OUTPUT);
  pinMode(Led_Pin2,OUTPUT);
  pinMode(Led_Pin3,OUTPUT);
}

void loop()
{
buttonState=digitalRead(2);
if (buttonState==HIGH)
{
digitalWrite(Led_Pin1,LOW);
digitalWrite(Led_Pin2, LOW);
digitalWrite(Led_Pin3,LOW);  
delay(1000);
digitalWrite(Led_Pin1, HIGH);
delay(1000);
digitalWrite(Led_Pin2, HIGH);
delay(1500);  
digitalWrite(Led_Pin3, HIGH);  
delay(2000);
} 
else
{
digitalWrite(Led_Pin1,LOW);
digitalWrite(Led_Pin2,LOW);
digitalWrite(Led_Pin3,LOW);
}
}