//pin number for button 
int buttonPin = 2;
//pin number for led 
int ledPin = 8;
//variable saving state of pin 
int buttonState = 0;

void setup() {
// led pin is Output
pinMode(ledPin, OUTPUT);
// button pin Input
pinMode(buttonPin, INPUT);
}

void loop(){
// loading state of button 
buttonState = digitalRead(buttonPin);
//checking if button is press or no 
//if yes buttonState = HIGH
if (buttonState == HIGH) {
digitalWrite(ledPin, HIGH); // zapneme LEDku
} else {
// if no buttonState = LOW 
digitalWrite(ledPin, LOW);
}
} 
