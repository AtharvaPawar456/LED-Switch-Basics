//LED Switch Basics
int val = 0;

void setup()
{    
pinMode(4, OUTPUT);//light
pinMode(2, INPUT);
}

void loop() {
val = digitalRead(2);

if (val == LOW) {
	digitalWrite(4, HIGH);
  	delay(500);}
else
digitalWrite(4, LOW);
}