/*
 * BTInjector
 * A tool that sends keystrokes wirelessly using Bluetooth for HID automation.
 * Author - WireBits
 */

#include <Keyboard.h>
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);

void setup()
{
 BTSerial.begin(9600);
 Keyboard.begin();
}

void loop()
{
 if (BTSerial.available())
 {
  char data = BTSerial.read();
  if (data == '1') {
    payload1();
  }
  if (data == '2') {
    payload2();
  }
  if (data == '3') {
    payload3();
  }
  if (data == '4') {
    payload4();
  }
  if (data == '5') {
    payload5();
  }
  if (data == '6') {
    payload6();
  }
  if (data == '7') {
    payload7();
  }
  if (data == '8') {
    payload8();
  }
  if (data == '9') {
    payload9();
  }
 }
}

void payload1(){
  //Put your payload here ;)
}
void payload2(){
  //Put your payload here ;)
}
void payload3(){
  //Put your payload here ;)
}
void payload4(){
  //Put your payload here ;)
}
void payload5(){
  //Put your payload here ;)
}
void payload6(){
  //Put your payload here ;)
}
void payload7(){
  //Put your payload here ;)
}
void payload8(){
  //Put your payload here ;)
}
void payload9(){
  //Put your payload here ;)
}