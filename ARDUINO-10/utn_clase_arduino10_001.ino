int led_pin = 8;
int pir_pin = 2;
int Buz_Pin = 6;
int pir_state = 0;
void setup()
{

pinMode(pir_pin, INPUT);
pinMode(Buz_Pin, OUTPUT);

pinMode(led_pin, OUTPUT);
}
void loop()
{

pir_state = digitalRead(pir_pin);

if (pir_state == HIGH){

digitalWrite(led_pin, HIGH);
tone(Buz_Pin,1014);
} else {

digitalWrite(led_pin, LOW);
noTone(Buz_Pin);
}
delay(100);
}