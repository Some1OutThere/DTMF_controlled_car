int value=0;
int input[]={2,3,4,5};
int output[]={8,9,10,11};
void setup()
{
int thispin=0;
for(thispin=0;thispin<4;thispin++)
{
pinMode (input[thispin],INPUT);
pinMode (output[thispin],OUTPUT);
}}
void loop()
{
value=digitalRead(2)+2*digitalRead(3)+4*digitalRead(4)+8*digitalRead(5);
switch(value)
{
case 13:
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
break;
case 11:
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
break;
case 9:
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
break;
case 7:
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
break;
default:
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
break;
}
}
