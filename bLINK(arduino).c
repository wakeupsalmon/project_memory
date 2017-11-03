#include <Keypad.h>

void setup() {

  pinMode(12, OUTPUT);
  pinMode(11,OUTPUT);
      Serial.begin(9600); 
}


#include "Keypad.h"

const byte Rows= 4; 
const byte Cols= 3; 
 


char keymap[Rows][Cols]=
{
{'1', '2', '3'},
{'4', '5', '6'},
{'7', '8', '9'},
{'*', '0', '#'}
};


byte rPins[Rows]= {8,7,6,5}; 
byte cPins[Cols]= {4,3,2}; 

Keypad kpd= Keypad(makeKeymap(keymap), rPins, cPins, Rows, Cols);


void loop(){
     char keypressed = kpd.getKey();
   
     if( keypressed == '5' || keypressed == '4' ){
     while(1){
char keypressed = kpd.getKey();
   
   

  if(keypressed == '*'){
      digitalWrite(12, LOW);   
    
    break;}

    keypressed = kpd.getKey();
if(keypressed == '*'){
      digitalWrite(12, LOW);   
    
    break;}


 digitalWrite(12, HIGH);   
  delay(200);      
      keypressed = kpd.getKey(); 

         if(keypressed == '*'){
      digitalWrite(12, LOW);   
    
    break;}


  digitalWrite(12, LOW);    
 delay(200); 

  }
  
}
   

   if(keypressed == '6'){


digitalWrite(11, HIGH);   
  delay(1000);                       
  digitalWrite(11, LOW);    
  delay(1000);   
digitalWrite(11, HIGH);   
  delay(1000);                       
  digitalWrite(11, LOW);    
  delay(1000);   
  while(1){
    digitalWrite(11, HIGH);

  keypressed = kpd.getKey();
 if (keypressed == '*') { digitalWrite(11, LOW);     
  break;
 }
 
  }}
 }
