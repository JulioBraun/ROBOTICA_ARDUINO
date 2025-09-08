//JULIOBRAUN DESENVOLVIMENTO IOT
// LED RGB ARDUINO 

int azul = 9;// variável azul
int verde = 10;// variável verde
int vermelho = 12;// variável vermelho

void setup() {
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode (vermelho, OUTPUT);
}

void loop() {
  Vermelho();//Função cor vermelha
  Verde();//Função cor verde
  Azul();//Função cor azul
  Branco();//Função cor branca
  Magenta();//Função cor magenta
  Amarelo();//Função cor amarela
  Ciano();//Função cor ciano
}

void Vermelho() {
  digitalWrite(vermelho, HIGH);//vermelho ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(vermelho, LOW);//vermelho desligado
  delay(1000);//Intervalo de 1 segundo
}
void Verde() {
  digitalWrite(verde, HIGH);//verde ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(verde, LOW);//verde desligado
  delay(1000);//Intervalo de 1 segundo
}
void Azul() {
  digitalWrite(azul, HIGH);//azul ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(azul, LOW);// azul desligado
  delay(1000);//Intervalo de 1 segundo
}
void Branco() {
  digitalWrite(azul, HIGH);//azul ligado
  digitalWrite(vermelho, HIGH);//vermelho ligado
  digitalWrite(verde, HIGH);// verde ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(azul, LOW);//azul desligado
  digitalWrite(vermelho, LOW);//vermelho desligado
  digitalWrite(verde, LOW);//verde desligado
  delay(1000);//Intervalo de 1 segundo
}
void Magenta() {
  digitalWrite(azul, HIGH);//azul ligado
  digitalWrite(vermelho, HIGH);//vermelho ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(azul, LOW);//azul desligado
  digitalWrite(vermelho, LOW);// vermelho desligado
  delay(1000);//Intervalo de 1 segundo
}
void Amarelo() {
  digitalWrite(verde, HIGH);//verde ligado
  digitalWrite(vermelho, HIGH);//vermelho ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(verde, LOW);//verde desligado
  digitalWrite(vermelho, LOW);//vermelho desligado
  delay(1000);//Intervalo de 1 segundo
}
void Ciano() {
  digitalWrite(verde, HIGH);//Coloca verde ligado
  digitalWrite(azul, HIGH);//Coloca azul ligado
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(verde, LOW);// verde desligado
  digitalWrite(azul, LOW);// azul  desligado
  delay(1000);//Intervalo de 1 segundo
}
