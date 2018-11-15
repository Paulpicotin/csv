int k =0;
int moy =0;
int tempsmoy=0;
void arg (){
  int temps=100 ;
  int i =0;

  while(temps != 20100){
  long nombre = random(405,481); //ici je simule un capteur infrarouge captant une valeur entre 405 et 480 
  delay(100);
  
  temps = temps + 100;
  if (nombre > 470){ //cet fonction sert a incrémenter i le nombre de pulsation a chaque fois que notre capteur capte une valeur au dessu de 470
    i++; 
    
    }
 
  }
tempsmoy++ ; // je fais la moyenne  de tout mes i pour afficher mes valeurs 
k=k+20;
moy=moy+i;
Serial.print(i*6);
Serial.print(';');
Serial.print(k);
Serial.println();
if (tempsmoy == 12){
moy=moy/2;
}

}


