int i=0;
void setup()
{
  for(i=0;i<8;i++)
  { pinMode(i, OUTPUT);}
}

void loop()
{
  for(i=0;i<8;i++)
  {digitalWrite(i, HIGH);
  delay(1314); // Wait for 1314 millisecond(s)
  digitalWrite(i, LOW);
   delay(520); // Wait for 520 millisecond(s)
  }
}