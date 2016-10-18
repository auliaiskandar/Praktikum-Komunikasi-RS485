#include <SoftwareSerial.h>
SoftwareSerial MySerial (3, 2);
int data;
void setup()
{
  Serial.begin (9600);
  Serial.println("Komunikasi RS485 :");
//  pinMode(3, OUTPUT);
//  digitalWrite(3, LOW);
  MySerial.begin(9600);
}

void loop()
{
  if (MySerial.available())
  {
    data = MySerial.read();
    Serial.write(data);
  }
}
