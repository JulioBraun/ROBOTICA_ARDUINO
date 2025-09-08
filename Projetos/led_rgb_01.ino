//JULIOBRAUN DESENVOLVIMENTO IOT
// LED RGB ARDUINO 

#define pinVermelho 9 
#define pinVerde 10 
#define pinAzul 11

void setup() {
  pinMode(pinVermelho, OUTPUT); 
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  // Acende gradualmente a cor vermelha
  for(int i = 0; i <= 255; i++){
    analogWrite(pinVermelho, i);
    delay(15);
  }

  // Apaga gradualmente a cor vermelha
  for(int i = 255; i >= 0; i--){
    analogWrite(pinVermelho, i);
    delay(15);
  }

  // Repete o processo para as cores verde e azul

  // Pisca duas vezes as 3 cores ao mesmo tempo
  for(int i = 0; i < 2; i++){
    delay(500);
    digitalWrite(pinVermelho, HIGH);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, HIGH);
    delay(500);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, LOW);
  }

  delay(500); // Aguarda para iniciar o loop novamente
}
