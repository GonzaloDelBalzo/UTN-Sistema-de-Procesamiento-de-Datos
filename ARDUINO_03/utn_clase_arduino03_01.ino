int Led1_Pin = 3; 
int Led2_Pin = 5;
int Pot_Pin = A0; 
int sensorValue = 0; 
int outputValue = 0; 

void setup() 
{ 
  pinMode(Led1_Pin, OUTPUT); 
  pinMode(Led2_Pin, OUTPUT);
  Test_Led(); 
} 

void loop() 
  
{ 
  sensorValue = analogRead(Pot_Pin); 
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led1_Pin, outputValue);
  analogWrite(Led2_Pin, outputValue);
} 

void Test_Led() 
  
{ 
  digitalWrite(Led1_Pin, HIGH);
  digitalWrite(Led2_Pin, LOW);
  delay(1000); 
  digitalWrite(Led1_Pin, LOW);
  digitalWrite(Led2_Pin, HIGH);
  delay(1000); 
  digitalWrite(Led1_Pin, HIGH);
  digitalWrite(Led2_Pin, LOW);
  delay(1000); 
  digitalWrite(Led1_Pin, LOW);
  digitalWrite(Led2_Pin, HIGH);
  delay(1000); 
  digitalWrite(Led1_Pin, HIGH);
  digitalWrite(Led2_Pin, LOW);
  delay(1000); 
  digitalWrite(Led1_Pin, LOW);
  digitalWrite(Led2_Pin, HIGH);
}