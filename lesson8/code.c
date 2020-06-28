
void setup() {

  Serial.begin(9600); //初始化串口通信，将波特率设为9600
}


void loop() {

  int sensorValue = analogRead(A0);//读取模拟引脚a0上的输入

  float voltage = sensorValue * (5.0 / 1023.0); //把引脚输入转成电压


  Serial.println(voltage);   //打印出你读的电压数值
}