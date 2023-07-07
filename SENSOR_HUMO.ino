#include <LedControl.h>
#include <Ticker.h>

#define DATO_PIN 9
#define CLK_PIN 7
#define CS_PIN 8
#define LED_GREEN 6
#define LED_RED 5
void Lectura_GAS(void);
void mostrar_alerta();
void mostrar_animacion();

LedControl Matriz_LED = LedControl(DATO_PIN, CLK_PIN, CS_PIN, 1);
Ticker ISR_GAS(Lectura_GAS, 5000);

#define Sensor_Gas_Pin A0

byte Alerta[8] = {
   B00011000,
   B00100100,
   B01011010,
   B10011001,
   B10000001,
   B01011010,
   B00100100,
   B00011000
};
byte Mano[8] = {
   B00010000,
   B00111000,
   B00111100,
   B10111100,
   B11111100,
   B01111100,
   B00111100,
   B00000000
};
byte Persona[8] = {
   B00011000,
   B00111100,
   B00011000,
   B00111100,
   B01011010,
   B00011000,
   B00100100,
   B01000010
};

const int Ancho = 8;
const int Alto = 8;
int Valor_Gas;
int prom;

void setup() {
    Matriz_LED.shutdown(0, false);
    Matriz_LED.setIntensity(0, 15);
    Matriz_LED.clearDisplay(0);
    pinMode(Sensor_Gas_Pin, INPUT);
    ISR_GAS.start();
    Serial.begin(9600);
}

void loop() {
    ISR_GAS.update();
    if (prom > 60) {
        mostrar_alerta();
        digitalWrite(LED_RED,HIGH);
    } else {
        mostrar_animacion();
        digitalWrite(LED_GREEN,LOW);
    }
    delay(1000);
}

void Lectura_GAS() {
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        Valor_Gas = map(analogRead(Sensor_Gas_Pin), 0, 1023, 0, 100);
        suma = suma + Valor_Gas;
        delay(100);
    }
    prom = suma / 5;
    Serial.println(Valor_Gas);
}
void mostrar_alerta() {
    Matriz_LED.clearDisplay(0);
    for (int t = 0; t < 5; t++) {
        for (int i = Alto; i > 0; i--) {
            Matriz_LED.setColumn(0, i, Alerta[i]);
        }
        delay(500);

        for (int i = Alto; i > 0; i--) {
            Matriz_LED.setColumn(0, i, Mano[i]);
        }
        delay(500);
    }
}
void mostrar_animacion() {
    Matriz_LED.clearDisplay(0);
    for (int i = 0; i < Alto; i++) {
        Matriz_LED.setColumn(0, i, Persona[i]);
    }
}
