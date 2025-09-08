//JULIOBRAUN DESENVOLVIMENTO IOT
//LED PUSH BOTTON

//definindo porta digital 
int buttonPin = 5;
int ledPin = 10;
int estadoButton = 0;
bool estadoLed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  estadoButton = digitalRead(buttonPin);//Leitura do e armazenamento do estado 
  if (estadoButton == HIGH) { 
    estadoLed = !estadoLed;
    delay(500);
  }
  if (estadoLed == true) { 
    digitalWrite(ledPin, HIGH);
  }
  else { //Senão
    digitalWrite(ledPin, LOW);
  }
}
