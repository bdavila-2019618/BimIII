#define R 3
#define G 5
#define B 6
#define pot A1
int v;
int vel;

void setup() {
  Serial.begin(9600);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(pot,OUTPUT);
}

void loop() {
  v = analogRead(20);
  vel = map(v,0,1023,0,255);
  
  analogWrite(R,174);
  analogWrite(G,92);
  analogWrite(B,230);
  delay(vel);
  analogWrite(R,255);
  analogWrite(G,255);
  analogWrite(B,255);
  delay(vel);
  analogWrite(R,0);
  analogWrite(G,255);
  analogWrite(B,255);
  delay(vel);
  analogWrite(R,189);
  analogWrite(G,174);
  analogWrite(B,20);
  delay(vel);
  analogWrite(R,225);
  analogWrite(G,87);
  analogWrite(B,35);
  delay(vel);

}
