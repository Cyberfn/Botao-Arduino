void setup(){
  pinMode(9, INPUT); // configura o pino com o botão como entrada
  pinMode(12, OUTPUT); // configura o pino com o LED como saída
}

void loop(){
  if (digitalRead(9) == HIGH){ // se botão estiver pressionado (HIGH)
    digitalWrite(12, HIGH); // acende o LED
  }
  else{ // se não estiver pressionado (LOW)
    digitalWrite(12, LOW); // apaga o LED
  }
}