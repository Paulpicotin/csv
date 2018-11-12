const int LED_ROUGE = 2;
void setup() {
  // on défini les pin utilisées 
pinMode (LED_ROUGE , OUTPUT); 
Serial.begin(9600);
}
void loop() {
  //le code lecture de la led 
  digitalWrite(LED_ROUGE,HIGH);//allumer LED_ROUGE
  delay(100); 
  Serial.println ("1");
  digitalWrite(LED_ROUGE,LOW);//eteids led_rouge
  delay(100);
  Serial.println ("0");
}
