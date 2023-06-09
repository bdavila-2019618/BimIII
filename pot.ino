/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Byron Renato Dávila Santiago
 * Carnet: 2019618
 * Proyecto: Potenciometro
*/

#define LED 5
#define pot A1
int Val_Pot;
int ILU;
void setup() 
{
 Serial.begin(9600);
 pinMode(LED,OUTPUT);
 pinMode(pot,INPUT);
}

void loop() 
{
 Val_Pot=analogRead(pot);
 ILU= map(Val_Pot,0,1023,0,255);
 analogWrite(LED,ILU);
}
