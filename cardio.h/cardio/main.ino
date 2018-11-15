#include "cardio.h"

int j=1;
int i =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  randomSeed(analogRead(0));
}

void loop() {
   // on appelle la fonction arg () contenu dans le cardio.h

   for (j;j<=12;j++){  // cet boucle sert a arreté le programme tant que j != de 12 

    arg();
   
    
    
  }
}
