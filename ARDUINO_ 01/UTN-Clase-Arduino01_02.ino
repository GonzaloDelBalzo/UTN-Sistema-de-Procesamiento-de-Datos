int Led_Pin1=13;
int Led_Pin2=12;

void setup()
{
  pinMode(Led_Pin1,OUTPUT);
  pinMode(Led_Pin2,OUTPUT);
}

void loop()
{
digitalWrite(Led_Pin1, HIGH);
digitalWrite(Led_Pin2,HIGH);  
delay(1000);
digitalWrite(Led_Pin1, LOW);
digitalWrite(Led_Pin2, LOW);
delay(1000);
}  