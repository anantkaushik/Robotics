int pin1 = 13;
int pin2 = 12;
int pin3 = 11;


void setup() {
  	pinMode(pin1 ,OUTPUT);
 	 pinMode(pin2, OUTPUT);
  	pinMode(pin3, OUTPUT);
  

}

void loop() {
	digitalWrite(pin1,HIGH);
	delay(2000);
	digitalWrite(pin1,LOW);
	delay(1);
	digitalWrite(pin2,HIGH);
	delay(1000);
	digitalWrite(pin2,LOW);
	delay(1);
	digitalWrite(pin3,HIGH);
	delay(3000);
	digitalWrite(pin3,LOW);
	delay(1);
}
