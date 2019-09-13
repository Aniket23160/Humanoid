
#include <Servo.h>

int Incoming_value;
int a=8;
int b=7;
int c=6;
int d=5;

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0; 
int pos2=180;// variable to store the servo position

void setup() {
   Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(a,OUTPUT);  
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT); 
  
  myservo1.attach(10); 
  myservo2.attach(9); 
  myservo3.attach(11); 
  myservo4.attach(12); // attaches the servo on pin 9 to the servo object
}

void loop() 
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();}     //Read the incoming data and store it into variable Incoming_value
           
    if(Incoming_value == '0'){ 
    Serial.println("Down");
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    delay(100);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    }
    
     if(Incoming_value == '1'){ 
    Serial.println("Up");
      digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
     delay(100);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);}
    
     if(Incoming_value == '2'){ 
    Serial.println("Right");
     digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
     delay(100);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);}
    
     if(Incoming_value == '3'){ 
    Serial.println("Left");
     digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
     delay(100);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);}

    if(Incoming_value == '4'){ 
    Serial.println("STOP");
    
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
     for (pos = 10; pos <= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);}
     for (pos2 = 170; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
    myservo1.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
    }
    if(Incoming_value == '5'){ 
    Serial.println("M1");
    
  for (pos = 0; pos <= 10; pos += 1) { // goes from 0 degrees to 180 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  
 }
//   for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}
  if(Incoming_value == '6'){ 
    Serial.println("M2");
    
  for (pos2 = 180; pos2 >= 170; pos2 -= 1) { // goes from 0 degrees to 180 degrees
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}
    if(Incoming_value == '7'){ 
    Serial.println("M3");
   
  for (pos = 0; pos <= 10; pos += 1) { // goes from 0 degrees to 180 degrees
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
//   for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}
    if(Incoming_value == '8'){ 
    Serial.println("M4");
    
  for (pos = 0; pos <= 10; pos += 1) { // goes from 0 degrees to 180 degrees
    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }}
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
      }

//    if(Incoming_value == "50"){ 
//    Serial.println("N1");
//     
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }}
//    
//  if(Incoming_value == "60"){ 
//    Serial.println("N2");
//     
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }}
//    
//    if(Incoming_value == "70"){ 
//    Serial.println("N3");
//    
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }}
//    
//    if(Incoming_value == "80"){ 
//    Serial.println("N4");
//    
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }}
    

  
//    if(Incoming_value == "9"){ 
//    Serial.println("Break");
//    pos=0;
//    }    

  


//void forward_90(char myservo)
//{  
//  for (pos = 0; pos <= 10; pos += 1) { // goes from 0 degrees to 180 degrees
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//
//  
//void backward_90(char myservo)
//{  
//  for (pos = 10; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//}
 
