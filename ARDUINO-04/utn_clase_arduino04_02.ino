int Led1_Pin = 3; 
int Led2_Pin = 5; 
int Fot_Pin = A0; 
int Int_Pin = 2; 
int sensorValue = 0; 
int inputValue = 0; 
int counter = 0; 

// Limites Invierno

int start1 = 18; 
int stop1 = 24; 

// Limites Verano 

int start2 = 20; 
int stop2 = 1; 

void setup() 
{ 
  Serial.begin(9600); 
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
    Serial.println("Led: Encendido"); 
    digitalWrite(Led1_Pin, HIGH); 
    digitalWrite(Led2_Pin, HIGH);
  } 
  else 
  { 
    if(counter >= start1) 
    { 
      // Lectura Analógica
      sensorValue = analogRead(Fot_Pin); 
      if(sensorValue < 500)
      { 
        Serial.println("Led rojo: Encendido"); 
        digitalWrite(Led1_Pin, HIGH);
        digitalWrite(Led2_Pin, LOW);
      } 
      else
      { 
        Serial.println("Led verde: Encendido"); 
        digitalWrite(Led1_Pin, LOW);
        digitalWrite(Led2_Pin, HIGH);
      } 
    } 
    else
    { 
      Serial.println("Led rojo y verde: Apagado");
      digitalWrite(Led1_Pin, LOW);
      digitalWrite(Led2_Pin, LOW);
    }
  } 
  counter++; 
  Serial.print("Hora: "); 
  Serial.println(counter);
  if (counter == 24) 
  { 
    counter =0; 
  } 
  delay(1000); 
}