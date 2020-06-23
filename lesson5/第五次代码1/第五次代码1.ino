#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
    
 digitalWrite(S1,HIGH);
 digitalWrite(S2,HIGH);
 digitalWrite(S3,HIGH);
 digitalWrite(S4,LOW);
  Serial.begin(9600);
}
byte income=0;
void loop()
{
  if(Serial.available()>0)
  {
  	income=Serial.read();
    	delay(10);
    
    income=income-'0';
     
                 
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
  	delay(10);
  }
}