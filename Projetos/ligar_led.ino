//JULIOBRAUN DESENVOLVIMENTO IOT
//LIGAR UM LED ARDUINO 

// código irá rodar uma única vez
void setup() 
{
  //pino 2 do Arduino como OUTPUT (saída)
  pinMode(2, OUTPUT);
}

// loop até que seu Arduino seja desligado
void loop() 
{
  // Ativamos o pino 2 
  digitalWrite(2, HIGH);

}
