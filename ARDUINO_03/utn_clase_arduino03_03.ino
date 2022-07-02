int Led1_Pin = 3; 
int Led2_Pin = 5;
int Pot_Pin = A0; 
int Int_Pin = 2; 
int sensorValue = 0; 
int outputValue = 0; 
int inputValue = 0; 

void setup() 
{ 
  pinMode(Led1_Pin, OUTPUT);
  pinMode(Led2_Pin, OUTPUT);
  pinMode(Int_Pin, INPUT); 
  Test_Led(); 
} 

void loop() 
{ 
  inputValue = digitalRead(Int_Pin);
  if (inputValue == HIGH)
  { 
    for (int fadeValue = 0 ; fadeValue <= 255;  fadeValue += 5)
    { 
      analogWrite(Led1_Pin, fadeValue); 
      analogWrite(Led2_Pin, fadeValue); 
      delay(30); 
    } 
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) 
    { 
      analogWrite(Led1_Pin, fadeValue); 
      analogWrite(Led2_Pin, fadeValue); 
      delay(30); 
    } 
  } 
  else 
  { 
    sensorValue = analogRead(Pot_Pin); 
    outputValue = map(sensorValue, 0, 1023, 0, 255); 
    analogWrite(Led1_Pin, outputValue); 
    analogWrite(Led2_Pin, outputValue);
  } 
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
