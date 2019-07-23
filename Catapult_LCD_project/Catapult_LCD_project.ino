#include <LiquidCrystal.h>

LiquidCrystal lcd(0, 1, 8, 9, 10, 11);

int m = 1000;
int n =  100;
int o =  200;
int p =  300;
int q =  400;

     //     Smile at start
  byte laveOko[8]    = {B00000,B00000,B01110,B01010,B01110,B01010,B01110,B00000};
  byte hornyNos[8]   = {B00000,B00000,B00000,B00000,B00000,B00000,B00100,B00100};
  byte praveOko[8]   = {B00000,B00000,B01110,B01010,B01110,B01010,B01110,B00000};
  byte laveUsta[8]   = {B00000,B00000,B00100,B00010,B00001,B00000,B00000,B00000};
  byte dolnyNos[8]   = {B00100,B01110,B00000,B00000,B00000,B11111,B00000,B00000};
  byte praveUsta[8]  = {B00000,B00000,B00100,B01000,B10000,B00000,B00000,B00000};

    //     Katapult 1/12
  byte katapultA1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultA2[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00001,B00011};
  byte katapultA3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultA4[8] = {B00000,B00000,B00000,B00111,B00110,B11100,B11111,B11100};
  byte katapultA5[8] = {B00101,B01101,B11001,B00001,B00001,B00011,B11111,B00000};
  byte katapultA6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

    //     Katapult 2/12
  byte katapultB1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultB2[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00011,B00101};
  byte katapultB3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultB4[8] = {B00000,B00000,B00111,B00110,B00000,B11100,B11111,B11100};
  byte katapultB5[8] = {B01101,B11001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultB6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

  
     // Katapult 3/12
  byte katapultC1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultC2[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00011,B01101};
  byte katapultC3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultC4[8] = {B00000,B00111,B00110,B00000,B00000,B11100,B11111,B11100};
  byte katapultC5[8] = {B11001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultC6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

    //   Katapult 4/12
  byte katapultD1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00001,B00001};
  byte katapultD2[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B11111,B10001};
  byte katapultD3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultD4[8] = {B01110,B01100,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultD5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultD6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};
  
     //   Katapult 5/12
  byte katapultE1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00001,B01111};
  byte katapultE2[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B11111,B11001};
  byte katapultE3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultE4[8] = {B01100,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultE5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultE6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

    //   Katapult 6/12
  byte katapultF1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B01111,B01101};
  byte katapultF2[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B11111,B11111};
  byte katapultF3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultF4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultF5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultF6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};
  
    //   Katapult 7/12
  byte katapultG1[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B00110,B00000};
  byte katapultG2[8] = {B00000,B00000,B00000,B00000,B00000,B11000,B11111,B00001};
  byte katapultG3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultG4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultG5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000 };
  byte katapultG6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

    //   Katapult 8/12
  byte katapultH1[8] = {B00000,B00000,B00000,B00000,B00011,B00011,B00000,B00000};
  byte katapultH2[8] = {B00000,B00000,B00000,B00000,B11000,B01100,B00111,B00001};
  byte katapultH3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultH4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultH5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultH6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

    //   Katapult 9/12
  byte katapultI1[8] = {B00000,B00000,B00000,B00000,B00001,B00001,B00000,B00000};
  byte katapultI2[8] = {B00000,B00000,B00000,B00000,B11100,B10110,B00011,B00001};
  byte katapultI3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultI4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultI5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultI6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

  
    //   Katapult 10/12
  byte katapultJ1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultJ2[8] = {B00000,B00000,B00000,B11100,B11100,B00110,B00111,B00001};
  byte katapultJ3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultJ4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultJ5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultJ6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

   //   Katapult 11/12
  byte katapultK1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultK2[8] = {B00000,B00000,B11100,B11100,B00110,B00010,B00011,B00001};
  byte katapultK3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultK4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultK5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultK6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

  //   Katapult 12/12
  byte katapultL1[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultL2[8] = {B00100,B01010,B01110,B00010,B00011,B00011,B00001,B00001};
  byte katapultL3[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000};
  byte katapultL4[8] = {B00000,B00000,B00000,B00000,B00000,B11100,B11111,B11100};
  byte katapultL5[8] = {B00001,B00001,B00001,B00001,B00001,B00011,B11111,B00000};
  byte katapultL6[8] = {B00000,B00000,B00000,B00000,B00000,B00111,B11111,B00111};

  //   Castle 1/1
  byte castle1[8]    = {B00000,B00000,B00000,B00101,B00111,B00111,B00110,B10111};
  byte castle2[8]    = {B00100,B01110,B01110,B01010,B11111,B11111,B10101,B11111};
  byte castle3[8]    = {B00000,B00000,B00000,B10100,B11100,B11100,B01100,B11101};
  byte castle4[8]    = {B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111};
  byte castle5[8]    = {B11111,B11011,B10001,B10001,B10001,B10001,B10001,B10001};
  byte castle6[8]    = {B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111};

  
void setup() {
 // set up the LCD's number of columns and rows:
 lcd.begin(16,2);
 // clear the LCD screen:
 lcd.clear();
 

        // get the standing man part on the screen:
        zaciatok();
       // delay(y);
    lcd.setCursor(4,0);
    lcd.print(" Zaujimavy ");

   lcd.setCursor(4,1);
   lcd.print("  projekt s "); 
   delay(2500);
   lcd.clear();
   zaciatok();
       // delay(y);
    lcd.setCursor(4,0);
    lcd.print(" Markom");

   lcd.setCursor(4,1);
   lcd.print("     Dufalom"); 
   delay(2500);
        lcd.clear();
        }

//putting all the pieces together in a loop:
void loop() {
 

          
stojaciKatapult1();
          
stojaciKatapult2();

stojaciKatapult3();

stojaciKatapult4();        

stojaciKatapult5();

stojaciKatapult6();

stojaciKatapult7();

stojaciKatapult8();

stojaciKatapult9();

stojaciKatapult10();

stojaciKatapult11();

stojaciKatapult12();

     hrad();


}
void zaciatok() {

  lcd.createChar(1, laveOko);
  lcd.createChar(2, hornyNos);
  lcd.createChar(3, praveOko);
  lcd.createChar(4, laveUsta);
  lcd.createChar(5, dolnyNos);
  lcd.createChar(6, praveUsta);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
}

void stojaciKatapult1(){

  lcd.createChar(1, katapultA1);
  lcd.createChar(2, katapultA2);
  lcd.createChar(3, katapultA3);
  lcd.createChar(4, katapultA4);
  lcd.createChar(5, katapultA5);
  lcd.createChar(6, katapultA6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(m);
}

void stojaciKatapult2() {

  lcd.createChar(1, katapultB1);
  lcd.createChar(2, katapultB2);
  lcd.createChar(3, katapultB3);
  lcd.createChar(4, katapultB4);
  lcd.createChar(5, katapultB5);
  lcd.createChar(6, katapultB6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(p);
}

void stojaciKatapult3() {
 
  lcd.createChar(1, katapultC1);
  lcd.createChar(2, katapultC2);
  lcd.createChar(3, katapultC3);
  lcd.createChar(4, katapultC4);
  lcd.createChar(5, katapultC5);
  lcd.createChar(6, katapultC6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(q );
}

void stojaciKatapult4() {
 
  lcd.createChar(1, katapultD1);
  lcd.createChar(2, katapultD2);
  lcd.createChar(3, katapultD3);
  lcd.createChar(4, katapultD4);
  lcd.createChar(5, katapultD5);
  lcd.createChar(6, katapultD6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult5() {

  lcd.createChar(1, katapultE1);
  lcd.createChar(2, katapultE2);
  lcd.createChar(3, katapultE3);
  lcd.createChar(4, katapultE4);
  lcd.createChar(5, katapultE5);
  lcd.createChar(6, katapultE6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(o);
}

void stojaciKatapult6() {
 
  lcd.createChar(1, katapultF1);
  lcd.createChar(2, katapultF2);
  lcd.createChar(3, katapultF3);
  lcd.createChar(4, katapultF4);
  lcd.createChar(5, katapultF5);
  lcd.createChar(6, katapultF6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult7() {
 
  lcd.createChar(1, katapultG1);
  lcd.createChar(2, katapultG2);
  lcd.createChar(3, katapultG3);
  lcd.createChar(4, katapultG4);
  lcd.createChar(5, katapultG5);
  lcd.createChar(6, katapultG6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult8() {
 
  lcd.createChar(1, katapultH1);
  lcd.createChar(2, katapultH2);
  lcd.createChar(3, katapultH3);
  lcd.createChar(4, katapultH4);
  lcd.createChar(5, katapultH5);
  lcd.createChar(6, katapultH6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult9() {
 
  lcd.createChar(1, katapultI1);
  lcd.createChar(2, katapultI2);
  lcd.createChar(3, katapultI3);
  lcd.createChar(4, katapultI4);
  lcd.createChar(5, katapultI5);
  lcd.createChar(6, katapultI6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult10() {

  lcd.createChar(1, katapultJ1);
  lcd.createChar(2, katapultJ2);
  lcd.createChar(3, katapultJ3);
  lcd.createChar(4, katapultJ4);
  lcd.createChar(5, katapultJ5);
  lcd.createChar(6, katapultJ6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult11() {
 
  lcd.createChar(1, katapultK1);
  lcd.createChar(2, katapultK2);
  lcd.createChar(3, katapultK3);
  lcd.createChar(4, katapultK4);
  lcd.createChar(5, katapultK5);
  lcd.createChar(6, katapultK6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
}

void stojaciKatapult12() {

  lcd.createChar(1, katapultL1);
  lcd.createChar(2, katapultL2);
  lcd.createChar(3, katapultL3);
  lcd.createChar(4, katapultL4);
  lcd.createChar(5, katapultL5);
  lcd.createChar(6, katapultL6);
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(3);
  lcd.setCursor(0,1);
  lcd.write(4);
  lcd.setCursor(1,1);
  lcd.write(5);
  lcd.setCursor(2,1);
  lcd.write(6);
  delay(n);
  lcd.clear();
}

void hrad(){
  lcd.setCursor(4,0);
  lcd.createChar(1, castle1);
  lcd.createChar(2, castle2);
  lcd.createChar(3, castle3);
  lcd.createChar(4, castle4);
  lcd.createChar(5, castle5);
  lcd.createChar(6, castle6);
  lcd.setCursor(4,0);
  lcd.write(1);
  lcd.setCursor(5,0);
  lcd.write(2);
  lcd.setCursor(6,0);
  lcd.write(3);
  lcd.setCursor(4,1);
  lcd.write(4);
  lcd.setCursor(5,1);
  lcd.write(5);
  lcd.setCursor(6,1);
  lcd.write(6);
}
  
