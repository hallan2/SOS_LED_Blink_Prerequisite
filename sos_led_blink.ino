int ledPin=10;

 void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    flash(200); flash(200); flash(200); // S, 3 short flashes
    delay(600); //3 dots between letters
    flash(500); flash(500); flash(500); // O, 3 long flashes
    delay(600); //3 dots between letters
    flash(200); flash(200); flash(200); // S, 3 short flashes
    delay(1000);
    
}

void flash(int period) 
{
  digitalWrite(ledPin,HIGH); //led on
  delay(period); // period of time on depending on letter
  digitalWrite(ledPin,LOW); //led off
  delay(period); //period of time off depending on letter
}

