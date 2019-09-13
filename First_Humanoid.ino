
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

int pos = 0;    // variable to store the servo position

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
    digitalWrite(d,LOW);}
    
     if(Incoming_value == '1'){ 
    Serial.println("Up");
      digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);}
    
     if(Incoming_value == '2'){ 
    Serial.println("Right");
     digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);}
    
     if(Incoming_value == '3'){ 
    Serial.println("Left");
     digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);}

    if(Incoming_value == '4'){ 
    Serial.println("STOP");
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);}

    if(Incoming_value == '5'){ 
    Serial.println("M1");
    forward_90(90,90,90,90);
    //backward_90(90,90,90,90);
    pos=0;
    }

    if(Incoming_value == '6'){ 
    Serial.println("M2");
    forward_90(45,45,90,90);
    pos=0;
    //backward_90(45,45,90,90)
    }

    if(Incoming_value == '7'){ 
    Serial.println("M3");
    forward_90(180,180,90,90);
    pos=0;
    //backward_90(180,180,90,90);
    }

    if(Incoming_value == '8'){ 
    Serial.println("M4");
    forward_90(0,180,90,90);
    pos=0;
   // backward_90(0,180,90,90);
   }

    if(Incoming_value == '9'){ 
    Serial.println("M5");
    forward_90(180,0,90,90);
    pos=0;
    //forward_90(180,0,90,90);mk0
    }
    if(Incoming_value == '9'){ 
    Serial.println("Stop0");
    pos=0;}
}
  
void forward_90(int l,int m,int n,int o)
{  
  for (pos = 0; pos <= l; pos += 1) { // goes from 0 degrees to 180 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
 for (pos = 0; pos <= m; pos += 1) { 
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 0; pos <= n; pos += 1) { 
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 0; pos <= o; pos += 1) { 
    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

void backward_90(int w,int x,int y, int z)
{
for (pos = w; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
}
for (pos = x; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
}
for (pos = y; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
}
for (pos = z; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
}
}
 
