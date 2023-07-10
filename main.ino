const int led_vermelho = 5;
const int led_verde = 6;
const int led_amarelo = 7;

char led;

void setup(){
  Serial.begin(9600);

  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
}

void loop(){
  if (Serial.available()) {
    led = Serial.read();
    if (led == 'R') { // Led vermelho - red
      if (digitalRead(led_vermelho) == LOW) // se led vermelho estiver desligado
        digitalWrite(led_vermelho, HIGH); // Acende led
      else
        digitalWrite(led_vermelho, LOW); // Apaga led
    }
    else if (led == 'G') { // Led verde - green
      if (digitalRead(led_verde) == LOW) // se led verde estiver desligado
        digitalWrite(led_verde, HIGH); // Acende led
      else
        digitalWrite(led_verde, LOW); // Apaga led
    }    
    else if (led == 'Y') { // Led amarelo - yellow
      if (digitalRead(led_amarelo) == LOW) // se led amarelo estiver desligado
        digitalWrite(led_amarelo, HIGH); // Acende led
      else
        digitalWrite(led_amarelo, LOW); // Apaga led
    }
  }
}