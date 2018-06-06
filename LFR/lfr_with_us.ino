int LS = 11;
int RS =  10;
int LM1 = 9;
int RM1 = 6;
int LM2 = 5;
int RM2 = 3;

const int trigPin = 13; 
const int echoPin = 12;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
 pinMode(LS ,INPUT);
 pinMode(RS , INPUT);
 pinMode(LM1 , OUTPUT);
 pinMode(RM1 , OUTPUT);
 pinMode(LM2 , OUTPUT);
 pinMode(RM2 , OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT); 
 Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor

if (distance < 10 )
{
  Serial.println("Obstacle Ahead!!");
  Serial.println("Distance:");
  Serial.println(distance);
  digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , LOW);
}

else
{
  if(digitalRead(LS) && digitalRead(RS)) //FORWARD
 {
  digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , HIGH);
  digitalWrite(RM2 , LOW);
 }

if(digitalRead(LS) && !(digitalRead(RS))) //LEFT
{
  digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , HIGH);
}

if(!(digitalRead(LS)) && digitalRead(RS)) //RIGHT
{
digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , HIGH);
  digitalWrite(RM1 , HIGH);
  digitalWrite(RM2 , LOW);
}

if(!(digitalRead(LS)) && !(digitalRead(RS))) //BACKWARD
{
  digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , LOW);
}

}

};
