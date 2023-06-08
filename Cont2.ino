/*
*Fundacion Kinal
*Centro Educativo Tecnico Laboral Kinal
*Electronica
*Grado: Quinto
*Seccion: A
*Cuerso: Taller de Electronica Digital y Reparacion de Computadoras I
*Nombre: Byron Renato Dávila Santiago
*Carnet: 2019618
*Proyecto: Uso de interrupciones externas
*/
#define btn_rising 2
#define btn_falling 3
//Display 1
#define pin_a 4
#define pin_b 5
#define pin_c 6
#define pin_d 7
#define pin_e 8
#define pin_f 9
#define pin_g 10
//Display 2
#define pin_1 11
#define pin_2 12
#define pin_3 13
#define pin_4 14
#define pin_5 15
#define pin_6 16
#define pin_7 17
//Funciones ISR
void funcion_ISR_rising(void);
void funcion_ISR_falling(void);
//variables
volatile static bool f_print= false;
volatile static unsigned char i=0;
void funcion_ISR_rising(void){
f_print=true;
  i++;
 if (i>50){
  i=0;
  } 
  }
void funcion_ISR_falling(void){
 f_print = true; 
  i--;
if (i>=255){
  i=50;
  }
}

void setup() {
Serial.begin(9600);
//Display 1 
pinMode(pin_a,OUTPUT);
pinMode(pin_b,OUTPUT);
pinMode(pin_c,OUTPUT);
pinMode(pin_d,OUTPUT);
pinMode(pin_e,OUTPUT);
pinMode(pin_f,OUTPUT);
pinMode(pin_g,OUTPUT);
//Diplay 2
pinMode(pin_1,OUTPUT);
pinMode(pin_2,OUTPUT);
pinMode(pin_3,OUTPUT);
pinMode(pin_4,OUTPUT);
pinMode(pin_5,OUTPUT);
pinMode(pin_6,OUTPUT);
pinMode(pin_7,OUTPUT);
pinMode(btn_rising,INPUT);
pinMode(btn_falling,INPUT);
attachInterrupt(digitalPinToInterrupt(btn_rising),funcion_ISR_rising,RISING);
attachInterrupt(digitalPinToInterrupt(btn_falling),funcion_ISR_falling,FALLING);
}
void loop() {
if (f_print){
  f_print = false; 
Serial.println(i);
  contador_Davila();
}
}
void contador_Davila(){
if(i==0){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==1){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==2){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,LOW),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==2){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,LOW),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==3){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==4){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==5){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==6){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==7){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==8){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==9){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,LOW);
}
if(i==10){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==11){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==12){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,LOW),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==13){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==14){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==15){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==16){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==17){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==18){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==19){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,LOW);
}
if(i==20){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==21){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==22){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,LOW),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==23){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==24){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==25){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==26){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==27){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==28){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==29){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,LOW),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,HIGH),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==30){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==31){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==32){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,LOW),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==33){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==34){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==35){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==36){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==37){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==38){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==39){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,LOW),digitalWrite(pin_7,HIGH);
}
if(i==40){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==41){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==42){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,LOW),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==43){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==44){
digitalWrite(pin_a,LOW),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==45){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
if(i==46){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,LOW),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==47){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,LOW),digitalWrite(pin_e,LOW),digitalWrite(pin_f,LOW),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==48){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==49){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,LOW),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,HIGH);
digitalWrite(pin_1,LOW),digitalWrite(pin_2,HIGH),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,LOW),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}
if(i==50){
digitalWrite(pin_a,HIGH),digitalWrite(pin_b,HIGH),digitalWrite(pin_c,HIGH),digitalWrite(pin_d,HIGH),digitalWrite(pin_e,HIGH),digitalWrite(pin_f,HIGH),digitalWrite(pin_g,LOW);
digitalWrite(pin_1,HIGH),digitalWrite(pin_2,LOW),digitalWrite(pin_3,HIGH),digitalWrite(pin_4,HIGH),digitalWrite(pin_5,LOW),digitalWrite(pin_6,HIGH),digitalWrite(pin_7,HIGH);
}}
}
