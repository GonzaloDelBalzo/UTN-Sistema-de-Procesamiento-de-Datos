// Codigo Ejemplo
int lectura = 0;
int Led_Pin1=13;
int Led_Pin2=8;
int anterior = 0;
int distancia = 0;

void setup()
{
pinMode(Led_Pin1, OUTPUT);
pinMode(Led_Pin2, OUTPUT);  
Serial.begin(9600);
// Enviar Texto a la Consola Serial
Serial.println("Iniciando");
}
void loop()
{
// Tomar Lectura
lectura = readUltrasonicDistance(7, 7);
// Calcular Distancia
distancia = 0.01723 * lectura;
  if(distancia!=anterior)
  {
    anterior=distancia;
// Enviar Lectura a la Consola Serial
Serial.print(distancia);
Serial.println("cm");
delay(100); // Demora de 100ms
}
//led testigos
if(distancia>=100)
  {
    digitalWrite(Led_Pin2, HIGH);
    digitalWrite(Led_Pin1, LOW);
  }
else
{
if(distancia<100)
      {
      digitalWrite(Led_Pin2, LOW);
      digitalWrite(Led_Pin1, HIGH);
    }
} 
}
// Función para Recolectar Lectura
long readUltrasonicDistance(int triggerPin, int echoPin)
{
// Inicializar Sensor
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
// Iniciar Sensor en Modo Lectura
pinMode(echoPin, INPUT);
// Retornar Lectura
return pulseIn(echoPin, HIGH);
}