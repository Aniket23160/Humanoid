
int Incoming_value;
int a=7;
int b=8;
int c=9;
int d=10;
               
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(a,OUTPUT);  
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);      
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
                              
 delay(100);
  }
