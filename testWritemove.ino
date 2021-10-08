#include "ESP_MICRO.h" 

int ena = 5;
int enb = 6;
int in1 = 2;
int in2 = 3;
int in3 = 7;
int in4 = 8;

void setup()
{
  Serial.begin(9600);
//    start("Username","Pass"); 
    pinMode(ena, OUTPUT);
    pinMode(enb, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

  analogWrite(ena, 255);
  analogWrite(enb, 255);
  delay(1000);
  
  start("LAPTOP-4FVMDJRV 5421","Sambit@01");
}

void loop()
{ 
  waitUntilNewReq(); //Waits until a new request from python code

  if (getPath() == "/forward")
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(1000);
    Serial.println("Bot going Forward");
    returnThisInt(0);
  }
  if (getPath() == "/backward")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(1000);
    Serial.println("Bot going backward");
    returnThisInt(0);
  }
  if (getPath() == "/left")
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(1000);
    Serial.println("Bot going left");
    returnThisInt(0);
  }
  if (getPath() == "/right")
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(1000);
    Serial.println("Bot going right");
    returnThisInt(0);
  } 
}
