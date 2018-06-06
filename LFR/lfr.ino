int LS = 12;
int RS = 11;
int LM1 = 2;
int RM1 = 4;
int LM2 = 6;
int RM2 = 8;

void setup() {
  // put your setup code here, to run once:
 pinMode(LS ,INPUT);
 pinMode(RS , INPUT);
 pinMode(LM1 , OUTPUT);
 pinMode(RM1 , OUTPUT);
 pinMode(LM2 , OUTPUT);
 pinMode(RM2 , OUTPUT);
// pinMode(trigPin, OUTPUT); 
// pinMode(echoPin, INPUT); 
 Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(LS) && digitalRead(RS)) //FORWARD
 {
  digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , HIGH);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , LOW);
 }

if(digitalRead(LS) && !(digitalRead(RS))) //LEFT
{
  digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , HIGH);
  digitalWrite(RM1 , HIGH);
  digitalWrite(RM2 , LOW);
}

if(!(digitalRead(LS)) && digitalRead(RS)) //RIGHT
{
digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , HIGH);
}

if(!(digitalRead(LS)) && !(digitalRead(RS))) //BACKWARD
{
  digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , LOW);
}


}
