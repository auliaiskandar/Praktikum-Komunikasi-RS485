#include <SoftwareSerial.h>
SoftwareSerial MySerial(3, 2);
int data = 123;
void setup()
{
  Serial.begin(9600);
//  pinMode(3, OUTPUT);
//  digitalWrite(3, LOW);
  MySerial.begin(9600);
}

void loop()
{
//  digitalWrite(3, HIGH);
  MySerial.println(data);
  delay(1000);
 }

