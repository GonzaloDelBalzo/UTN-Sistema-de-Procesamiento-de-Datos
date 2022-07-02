int Led1_Pin = 3;
int Led2_Pin = 5;
int Fot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
Serial.begin(9600);
pinMode(Led1_Pin, OUTPUT);
}
void loop()
{
 digitalWrite(Led1_Pin, HIGH);
 digitalWrite(Led2_Pin, LOW);
 sensorValue = analogRead(Fot_Pin);
 outputValue = map(sensorValue, 0, 1023, 0, 255);
 analogWrite(Led1_Pin, outputValue);
 analogWrite(Led2_Pin, outputValue); 
 Serial.print("Lectura: ");
 Serial.println(sensorValue);
 Serial.print("Mapeado: ");
 Serial.println(outputValue);
 delay(250);
 digitalWrite(Led1_Pin, LOW);
 digitalWrite(Led2_Pin, LOW); 
 delay(250);
}
