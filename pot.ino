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
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define direccion_lcd 0x27
#define filas 2
#define columnas 16
#define DIVISOR A0

int medicion_resistencia();

//Constructor
LiquidCrystal_I2C LCD_DAVILA(direccion_lcd, columnas, filas); 

  void setup() {
    Serial.begin(9600);
    pinMode(DIVISOR, INPUT);
     LCD_DAVILA.init();
  LCD_DAVILA.backlight();
}
void loop() {
  LCD_DAVILA.setCursor(0,0);
  LCD_DAVILA.print("Resistencia :)");
  unsigned long int ohms = medicion_resistencia();
  LCD_DAVILA.setCursor(0,1);
  LCD_DAVILA.print(ohms);
  LCD_DAVILA.print(" ohm          ");
}

 int medicion_resistencia(){
    int LEC = 0;   
    int Ve = 5;  
    float VR2 = 0;    
    float R1 = 10000;    
    float R2 = 0;         
    float rela = 0;

     LEC = analogRead(DIVISOR);
   if(LEC) //Si detecta una resistencia
  {
    rela = LEC * Ve;  
    VR2 = (rela)/1024.0; 
  rela = (Ve/VR2) -1;  
    R2= (R1 * rela)-20;  
    Serial.print("Resistancia:");
    Serial.println(R2);
    return R2;
  }
  }
