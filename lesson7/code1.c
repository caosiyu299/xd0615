#include <MsTimer2.h>
volatile int pinInterrupt=2;
int tick=0;
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8

#define LT 6  //测试
#define BT 7  //消音

void onTimer()
{
  Serial.print("timer ");
  Serial.println(tick++);
}


void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT); 
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT); //锁
   
    digitalWrite(LT,HIGH);
    digitalWrite(BT,HIGH);
    digitalWrite(S1,LOW);
   Serial.begin(9600); //初始化串口
  
  MsTimer2::set(1000, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时
  

  
}

void loop()
{  for(int i=0;i<10;i++)
  { 
   if(i==0)
    { digitalWrite(IN1,LOW);
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
     
    }
    if(i==1)
    { digitalWrite(IN1,HIGH);
     digitalWrite(IN2,LOW);
     digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
    }
   
      if(i==2)
      { digitalWrite(IN1,LOW);
       digitalWrite(IN2,HIGH);
       digitalWrite(IN3,LOW);
       digitalWrite(IN4,LOW);
        }
  
    if(i==3)
    { digitalWrite(IN1,HIGH);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
     
      }
   
  if(i==4)
    { digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    
      }
  
  if(i==5)
    { digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    
       }
  if(i==6)
    { digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
     
      }
  
  if(i==7)
    { digitalWrite(IN1,HIGH);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
     
      }
  
  if(i==8)
    { digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
     
     }
  if(i==9)
    { digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
    
       }
   if(i==10)
    { i=-1;}
     delay(1000);
  }
}
  
  
  
  
  
  
