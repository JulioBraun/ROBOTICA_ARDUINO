//JULIOBRAUN DESENVOLVIMENTO IOT
// BUZZER ATIVO ARDUINO  

int buzzer = 8; // pino digital 8, onde o buzzer está conectado
int i = 0;//Variável para contar o número de vezes que o buzzer irá tocar 

void setup() {
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  for(i; i<5; i++){
  digitalWrite(buzzer, HIGH); // Liga o buzzer
  delay(500); // Aguarda 500 milissegundos
  digitalWrite(buzzer, LOW); // Desliga o buzzer
  delay(500); // Aguarda mais 500 milissegundos
}
}
