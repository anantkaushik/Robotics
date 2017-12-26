//Basic car having two motors with ultrasonic sensor.If there is any obstacle ahead within 10 cm range the car will stop moving otherwise it will move forward by default.
int LM1 = 9;
int RM1 = 6;
int LM2 = 5;
int RM2 = 3;

const int trigPin = 13; 
const int echoPin = 12;

long duration;
int distance;

void setup() {
 pinMode(LM1 , OUTPUT);
 pinMode(RM1 , OUTPUT);
 pinMode(LM2 , OUTPUT);
 pinMode(RM2 , OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT); 
 Serial.begin(9600);  
}

void loop() {
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
  if (distance <= 10 ){
    Serial.println("Obstacle Ahead!!");
    Serial.println("Distance:");
    // Prints the distance on the Serial Monitor
    Serial.println(distance);
    // Stop the car
    digitalWrite(LM1 , LOW);
    digitalWrite(LM2 , LOW);
    digitalWrite(RM1 , LOW);
    digitalWrite(RM2 , LOW);
  }
  else{
  //Move Forward
  digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , HIGH);
  digitalWrite(RM2 , LOW);
  }
};
