int sensorPin = 0; //pin anal�gico
void setup() //inicializa
{
Serial.begin(9600); //Comienza conexi�n serial
}
void loop() //Ejecuci�n continua
{
int reading = analogRead(sensorPin);
//convertir a voltaje
float voltage = reading * 5.0;
voltage /= 1024.0;
float temperatureC = (voltage - 0.5) * 100 ;
Serial.print(temperatureC); //env�a por serial
Serial.println(" degrees C");
delay(1000); //pausa de un seg
}
