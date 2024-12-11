#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo6;
int d1;
int d2;
int d3;
int d4;
int d6;

void setup() {
  // put your setup code here, to run once:
servo1.attach(9);
servo2.attach(10);
servo3.attach(11);
servo4.attach(8);
servo6.attach(12);
Serial.begin(9600);
Serial.setTimeout(10);
int m1=servo2.read();
 Serial.println(m1);
int m2=servo3.read();
 Serial.println(m2);

/*for (int i=0; i<= 90; i+= 1)
     {
       servo2.write(i);             
       delay(30);    
     }
for (int i=0; i<= 45; i+= 1)
     {
       servo3.write(i);             
       delay(30);    
     }    */ 


/*servo1.write(0);  
servo2.write(90);
servo3.write(45);
servo4.write(0);
servo6.write(0);*/
}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()!=0){
String data=Serial.readString();
int a=data.toInt();
int b;
if(a>=0&&a<200)
{
  d1=servo1.read();
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

Serial.println(data);
}
if(a>=200&&a<400)
{
  d2=servo2.read();
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
 }
if(a>=400&&a<600)
{
  d3=servo3.read();
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
  
}
if(a>=600&&a<800)
{
  d4=servo4.read();
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
  
}
if(a>=1000&&a<1200)
{
  d6=servo6.read();
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
  
}
  
}  
}
