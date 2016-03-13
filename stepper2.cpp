#include "Arduino.h"
#include "stepper2.h"

stepper2::stepper2(int ENA,int DIR,int CLK)
{
    pinMode(DIR,OUTPUT);                       
    pinMode(CLK,OUTPUT);
    digitalWrite(ENA,HIGH);                  
    _ena = ENA;
    _dir = DIR;
    _clk = CLK;
}

void stepper2::fullSpeed(int steps)
{
  if (steps > 0 ) {
    int x=0;
    for(x=0;x<=steps;x++)                         
  {
    digitalWrite(_dir,HIGH);                 
    digitalWrite(_clk,HIGH);                 
    delay(0.001);                           
    digitalWrite(_clk,LOW);                 
    delay(2);                               
  }
  }else if(steps < 0) {
    int x;
    for(x=steps;x<=0;x++)                        
    {
       digitalWrite(_dir,LOW);             
       digitalWrite(_clk,HIGH);            
       delay(0.001);                       
       digitalWrite(_clk,LOW);             
       delay(2);                           
    }
  }
 }
void stepper2::halfSpeed(int steps)
{
  if (steps > 0 ) {
    int x=0;
    for(x=0;x<=steps;x++)                  
  {
    digitalWrite(_dir,HIGH);               
    digitalWrite(_clk,HIGH);               
    delay(0.001);                          
    digitalWrite(_clk,LOW);                
    delay(4);                             
  }
  }else if(steps < 0) {
    int x;
    for(x=steps;x<=0;x++)                 
    {
       
       digitalWrite(_dir,LOW);            
       digitalWrite(_clk,HIGH);           
       delay(0.001);                       
       digitalWrite(_clk,LOW);             
       delay(4);                          
    }
  }
 }
 void stepper2::quarSpeed(int steps)
{
  if (steps > 0 ) {
    int x=0;
    for(x=0;x<=steps;x++)                  
  {
    digitalWrite(_dir,HIGH);               
    digitalWrite(_clk,HIGH);               
    delay(0.001);                          
    digitalWrite(_clk,LOW);                
    delay(8);                             
  }
  }else if(steps < 0) {
    int x;
    for(x=steps;x<=0;x++)                 
    {
       
       digitalWrite(_dir,LOW);            
       digitalWrite(_clk,HIGH);           
       delay(0.001);                       
       digitalWrite(_clk,LOW);             
       delay(8);                          
    }
  }
 }