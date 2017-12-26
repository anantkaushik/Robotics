//Program to light up the Number entered by the user on Breadboard.
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    String val = Serial.readString(); //taking input from the user from the serial monitor
    Serial.println(val); //printing the number entered by the user on serial monitor
      if (val=="0"){
        zero_high();
        delay(1000);
        zero_low();
        delay(100);
   }
  
   else if (val=="1"){
      one_high();
      Serial.println(13);
      delay(1000);
      one_low();
      delay(100);
   }
    
   else if (val=="2"){
      two_high();
      delay(1000);
      two_low();
      delay(100);
   }
  
   else if (val=="3"){
      three_high();
      delay(1000);
      three_low();
      delay(100);
   }
    
   else if (val=="4"){
      four_high();
      delay(1000);
      four_low();
      delay(100);
   }
    
   else if (val=="5"){
      five_high();
      delay(1000);
      five_low();
      delay(100);
   }
  
   else if (val=="6"){
      six_high();
      delay(1000);
      six_low();
      delay(100);
   }
    
   else if (val=="7"){
      seven_high();
      delay(1000);
      seven_low();
      delay(100);
   }
    
   else if (val=="8"){
      eight_high();
      delay(1000);
      eight_low();
      delay(100);
   }
    
   else if (val=="9"){
      nine_high();
      delay(1000);
      nine_low();
      delay(100);
   }

   else if(val=="blink"){
    blink();
   }

   else{
      digitalWrite(13,LOW);
      digitalWrite(10,LOW);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(9,LOW);
      digitalWrite(7,LOW);
   }
  }
}

void zero_high(){
   digitalWrite(13,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(7,HIGH);
}

void zero_low(){
   digitalWrite(13,LOW);
   digitalWrite(10,LOW);
   digitalWrite(8,LOW);
   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(7,LOW);
}

void one_high(){
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}

void one_low(){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void two_high(){
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
}

void two_low(){
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
}

void three_high(){
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
}

void three_low(){
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
}

void four_high(){
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}

void four_low(){
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void five_high(){
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
}

void five_low(){
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
}

void six_high(){
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
}

void six_low(){
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
}

void seven_high(){
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}

void seven_low(){
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void eight_high(){
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
}

void eight_low(){
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
}

void nine_high(){
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}

void nine_low(){
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}