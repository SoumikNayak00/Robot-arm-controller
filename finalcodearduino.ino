#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo6;
int d1=0;
int d2=0;
int d3=0;
int d4=0;
int d6=0;

void setup() {
  // put your setup code here, to run once:
servo1.attach(9);
servo2.attach(10);
servo3.attach(11);
servo4.attach(8);
servo6.attach(12);
Serial.begin(9600);
Serial.setTimeout(10);
servo1.write(0);  
servo2.write(90);
servo3.write(20);
servo4.write(0);
servo6.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()!=0){
String data=Serial.readString();
int a=data.toInt();
int b;
if(a>=0&&a<200)
{
  if(d1<a)
   { Serial.println(a);  
    for (int i=d1; i<= a; i+= 1)
     {
       servo1.write(i);             
       delay(30);    
     }
   }
  else
  {
    for (int i=d1; i>= a; i=i-1)
     {
       servo1.write(i);     
       delay(30); 
     }
  }
d1=a;
Serial.println(data);
}
if(a>=200&&a<400)
{
 b=a-200;
  if(d2<b)
   { Serial.println(b);
   
      for (int i=d2; i<= b; i+= 1)
        {
   
           servo2.write(i);             
           delay(30);  
    
        }
    }
  else
   {
    for (int i=d2; i>= b; i=i-1)
     {
      servo2.write(i);     
      delay(30); 
     }
   }
  d2=b;
}
if(a>=400&&a<600)
{
 b=a-400;
  if(d3<b)
   { Serial.println(b);
   
      for (int i=d3; i<= b; i+= 1)
        {
   
           servo3.write(i);             
           delay(30);  
    
        }
    }
  else
   {
    for (int i=d3; i>= b; i=i-1)
     {
      servo3.write(i);     
      delay(30); 
     }
   }
  d3=b;
}
if(a>=600&&a<800)
{
 b=a-600;
  if(d4<b)
   { Serial.println(b);
   
      for (int i=d4; i<= b; i+= 1)
        {
   
           servo4.write(i);             
           delay(30);  
    
        }
    }
  else
   {
    for (int i=d4; i>= b; i=i-1)
     {
      servo4.write(i);     
      delay(30); 
     }
   }
  d4=b;
}
if(a>=1000&&a<1200)
{
 b=a-1000;
 b=b%40;
  if(d6<b)
   { Serial.println(b);
   
      for (int i=d6; i<= b; i+= 1)
        {
   
           servo6.write(i);             
           delay(30);  
    
        }
    }
  else
   {
    for (int i=d6; i>= b; i=i-1)
     {
      servo6.write(i);     
      delay(30); 
     }
   }
  d6=b;
}
  
}  
}
