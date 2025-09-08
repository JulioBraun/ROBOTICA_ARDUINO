//JULIOBRAUN DESENVOLVIMENTO IOT
//LED SENSOR ULTRASSONICO HC-SR04

#include "Ultrasonic.h"
Ultrasonic ultrasonic(3, 2); 

const int ledVerde = 4;
const int ledAmarelo = 5;
const int ledVermelho = 6;

long microsec = 0; // variaveis de controle
float distanciaCM = 0;

void setup() {
  Serial.begin(9600); // serial monitor
  pinMode(ledVerde, OUTPUT); 
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  //valor do sensor
  microsec = ultrasonic.timing();

  //distância em CM
  distanciaCM = ultrasonic.convert(microsec, Ultrasonic::CM);

  ledDistancia();
  Serial.print(distanciaCM);
  Serial.println(" cm");
  delay(500);
}

void ledDistancia() {

  //Desliga todos os LEDs
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);

  //se a distancia for entre 30 cm e 20 cm
  if (distanciaCM <= 30 and distanciaCM >= 20) {
    digitalWrite(ledVerde, HIGH); //liga o LED verde
  }
  // se a distancia for 10 cm e 20 cm
  if (distanciaCM <= 20 and distanciaCM >= 10) {
    digitalWrite(ledAmarelo, HIGH); //liga LED amarelo
  }

  if (distanciaCM < 10) { // se a distancia for menor que 10 cm
    digitalWrite(ledVermelho, HIGH); // liga LED vermelho
  }
}
