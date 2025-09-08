//JULIOBRAUN DESENVOLVIMENTO IOT
// SEMAFORO NO ARDUINO 

//  portas 
int vermelho = 10;
int amarelo = 9;
int verde = 8;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);

  // esperamos 2s com o sinal no amarelo
  delay(2000);

  // apagamos o amarelo e ligamos o vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  
  // esperamos 5s com o sinal fechado
  delay(5000);  

  // para finalizar, apagamos o vermelho e ligamos o verde
  digitalWrite(verde, HIGH);
   digitalWrite(vermelho, LOW);

  // esperamos 5s com o sinal aberto
  delay(5000);
}
