void setup() {
  // put your setup code here, to run once:
  /* Pin 8 används för att skicka ström
   från Arduino */
  pinMode(8,OUTPUT);
  
}

void loop() {
  
// turn the LED on (HIGH is the voltage level)t your main 
//code here, to run repeatedly:
digitalWrite(8, HIGH);
delay(2000);
digitalWrite(8, LOW);
delay(2000);

}
