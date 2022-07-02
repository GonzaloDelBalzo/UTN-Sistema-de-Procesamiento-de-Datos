int Led1_Pin = 3; 
int Led2_Pin = 5;
int Pot_Pin = A0; 
int Int_Pin = 2; 
int sensorValue = 0; 
int inputValue = 0; 

void setup()
{
  pinMode(Led1_Pin, OUTPUT);
  pinMode(Led2_Pin, OUTPUT);
  pinMode(Int_Pin, INPUT); 
} 

void loop() 
{ 
  // Lectura Digital
  inputValue = digitalRead(Int_Pin); 
  if (inputValue == HIGH) 
  { 
    digitalWrite(Led1_Pin, HIGH); 
    digitalWrite(Led2_Pin, HIGH);
  } 
  else {
    // Lectura Analógica
    sensorValue = analogRead(Pot_Pin); 
    if(sensorValue< 800)
    { 
      digitalWrite(Led1_Pin, HIGH);
      digitalWrite(Led2_Pin, LOW);
    } 
    else 
    { 
      digitalWrite(Led1_Pin, LOW);
      digitalWrite(Led2_Pin, HIGH);
    } 
  } 
}