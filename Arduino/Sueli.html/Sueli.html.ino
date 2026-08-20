// Alarme Luminoso de Proximidade

/*
 * Utilizaremos um Arduino Uno, um sencor HC-SRO4, tres LEds e uma protoboard
 *
 */

#define Ptrig 8 // define os pinos do Arduino onde serao ligados os terminais Echo e Trig do sensor
#define Pecho 7 // se quiser utilizar outros pinos, troque os números aqui
#define verde 12 // define os pinos onde serão ligados os LEDs
#define amarelo 11 
#define vermelho 10

void Setup() {

pinMode(Ptrig, OUTPUT);
pinMode(Pecho, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  long tempo, distancia;
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
digitalWrite(11, LOW);

digitalWrite(Ptrig, LOW);
delayMicroseconds(2);
digitalWrite(Ptrig, HIGH);
delayMicroseconds(10);
digitalWrite(Ptrig, LOW);
tempo = pulseIn(Pecho, HIGH);
distancia = tempo / 58;

if (distancia >= 15) {
  digitalWrite(9, HIGH);}
if (distancia >= 5 && distancia < 15 ){
  digitalWrite(10, HIGH);}
if (distancia < 5){
  digitalWrite(11, HIGH);}    

delay(100);
}













