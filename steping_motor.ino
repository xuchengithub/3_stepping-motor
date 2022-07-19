const int stepPin =5; 
const int dirPin = 4; 
const int enPin = 2;

void setup() {
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,HIGH);
  
}

void loop() {
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  for(int x = 0; x < 50; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2000); 
  }
  for(int x = 0; x < 50; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  for(int x = 0; x < 50; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(200); 
  }
  
  for(int x = 0; x < 500; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(100); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(100); 
  }
  for(int x = 0; x < 50; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(200); 
  }
  for(int x = 0; x < 50; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
   for(int x = 0; x < 50; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(2000); 
  }
  delay(500); // One second delay
//  digitalWrite(dirPin,LOW); //Changes the direction of rotation
//  for(int x = 0; x < 800; x++) {
//    digitalWrite(stepPin,HIGH);
//    delayMicroseconds(100);
//    digitalWrite(stepPin,LOW);
//    delayMicroseconds(100);
//  }
}
