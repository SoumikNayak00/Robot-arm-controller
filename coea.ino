#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
int d=0;

void setup() {
  // put your setup code here, to run once:
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
Serial.begin(9600);
Serial.setTimeout(10);
servo1.write(90);

}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()!=0){
String data=Serial.readString();
int a=data.toInt();
  Serial.println("started");

int b;
if(a>=0&&a<200)
{
  if(d<a)
  { Serial.println(a);
   Serial.println("lemon");
    for (int i=d; i<= a; i+= 1)
   {
      Serial.println(i);
   Serial.println("alakesh");
    servo1.write(i);             
    delay(15);  
    
  }}
  else
  {
    for (int i=d; i>= a; i=i-1)
   {
    servo1.write(i);     
       Serial.println("alakesh decrease");
    servo1.write(i); 
    delay(15); 
    }
  }


Serial.println(data);
}
if(a>=200&&a<400)
{
b=a-200;
servo2.write(b);
Serial.println(b);
}
if(a>=400&&a<600)
{
b=a-400;
servo3.write(b);
Serial.println(b);
}
 d=a;
  Serial.println(d);
   Serial.println("dheersj");
}  
}
