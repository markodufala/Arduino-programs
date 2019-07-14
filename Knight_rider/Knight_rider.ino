// pins number
int ledPins [] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup()
  {
    for(int i=0; i<8;i++){
      pinMode(ledPins[i], OUTPUT);
      digitalWrite(ledPins[i], LOW);
      }
}


// from right to left
void loop(){
for(int i=0; i<7;i++){
digitalWrite(ledPins[i], HIGH);
delay(100);
digitalWrite(ledPins[i], LOW);
}


//blink 1
for(int i=0; i<8;i++){
    digitalWrite(ledPins[i], HIGH);
    
}
delay(200);

for(int i=0; i<8;i++){
  digitalWrite(ledPins[i], LOW);
    
  }
delay(125);
//blink 2
for(int i=0; i<8;i++){
    digitalWrite(ledPins[i], HIGH);
    
}
delay(200);

for(int i=0; i<8;i++){
  digitalWrite(ledPins[i], LOW);
    
  }
delay(125);
// from left to right
for(int i=7; i>0;i--)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
}
//blink 3
for(int i=0; i<8;i++){
    digitalWrite(ledPins[i], HIGH);
    
}
delay(200);

for(int i=0; i<8;i++){
  digitalWrite(ledPins[i], LOW);
    
  }
delay(125);
//blink 4
for(int i=0; i<8;i++){
    digitalWrite(ledPins[i], HIGH);
    
}
delay(200);

for(int i=0; i<8;i++){
  digitalWrite(ledPins[i], LOW);
    
  }
delay(125);

}
