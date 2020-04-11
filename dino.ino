#include <Servo.h>

Servo myservo;
const int analogInPin = A0;
int sensorValue = 0;

void setup() {
  
Serial.begin(9600);
myservo.attach(2);
myservo.write(0);

}

void loop() {
  
  
  
  sensorValue = analogRead(analogInPin);
  Serial.println(sensorValue);
  
 
  
  if (sensorValue<=151 && myservo.read()==0){
    myservo.write(35);                                                                                                                      
    
    delay(100);

    
 
  }
  else if(myservo.read()>0&&sensorValue>=154){
    myservo.write(0);
    }
  delay(100);

  
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
