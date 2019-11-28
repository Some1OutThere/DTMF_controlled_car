#define trigPin 12 // OPTIONAL: Defining the trigger pin of the sensor to the 12th pin of UNO
#define echoPin 13 // OPTIONAL: Defining the echo pin of the sensor to the 13th pin of UNO
#include <Servo.h> // OPTIONAL: We added a servo motor for sweeping the obstacles infront of the robo :-P
Servo servoMain;  
int value=0;
int input[]={2,3,4,5};
int output[]={8,9,10,11};
void setup()
{
servoMain.attach(7); // Attaching the servo to the 7th pin fo the UNO
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
int thispin=0;
for(thispin=0;thispin<4;thispin++)
{
pinMode (input[thispin],INPUT);
pinMode (output[thispin],OUTPUT);
}}
void loop()
{
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if(distance<8)
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
servoMain.write(160); // Turn Servo Left to 160 degrees
delay(1500); // Wait 1 second
servoMain.write(10); // Turn Servo Left to 10 degrees
delay(1500); 
}
else
{
value=digitalRead(2)+2*digitalRead(3)+4*digitalRead(4)+8*digitalRead(5);
switch(value)
{
case 13: // FORWARD
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
break;
case 11: //RIGHT
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
break;
case 9: //LEFT
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
break;
case 7: //REVERSE
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
break;
default: //STOP
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
break;
}}
delay(500);
}
