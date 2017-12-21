int ip1=11,ip2=12,ip3=13,ip4=1,ip5=2,op1=4,op2=5,op3=6,op4=7,val1,val2,val3,val4,val5;
void setup() {

  
  // put your setup code here, to run once:
  
  pinMode(ip1,INPUT);
  pinMode(ip2,INPUT);
  pinMode(ip3,INPUT);
  pinMode(ip4,INPUT);
  pinMode(ip5,INPUT);
  pinMode(op1,OUTPUT);
  pinMode(op2,OUTPUT);
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  
  
  

}

void loop() {
  int count;
  
  val1=digitalRead(ip1);
  val2=digitalRead(ip2);
  val3=digitalRead(ip3);
  val4=digitalRead(ip4);
  val5=digitalRead(ip5);
 

  
  
  if((val1==HIGH&&val2==HIGH&&val3==HIGH&&val4==HIGH&&val5==HIGH)||(val1==LOW&&val2==LOW&&val3==HIGH&&val4==LOW&&val5==LOW))
  {
    stret();
    delay(10);
    stand();
  }
 
   if((val1==LOW&&val2==HIGH&&val3==LOW&&val4==LOW&&val5==LOW)||(val1==LOW&&val2==HIGH&&val3==HIGH&&val4==LOW&&val5==LOW))
   {
    right();
    delay(10);
    stand();
    
   }
   
   if((val1==HIGH&&val2==LOW&&val3==LOW&&val4==LOW&&val5==LOW)||(val1==HIGH&&val2==LOW&&val3==HIGH&&val4==LOW&&val5==LOW))
   {
    
    
      left();
    delay(10);
    stand();
    
   
   
    
   }
   if(val1==LOW&&val2==LOW&&val3==LOW&&val4==LOW&&val5==LOW)
   {
    stand();
   }
   if(val1==LOW&&val2==HIGH&&val3==HIGH&&val4==LOW&&val5==HIGH)
   {
    power_right();
   }
   if(val1==LOW&&val2==LOW&&val3==HIGH&&val4==LOW&&val5==HIGH)
   {
    stret();
    delay(500);
    stand();
    delay(3000);
    power_right();
    delay(3000);
   
   }
}


  
void stret()
{
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      digitalWrite(op3,HIGH);
      digitalWrite(op4,LOW);
}
void left()
{
      digitalWrite(op1,LOW);
      digitalWrite(op2,LOW);
      digitalWrite(op3,HIGH);
      digitalWrite(op4,LOW);
}
void right()
{
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,LOW);
}
void back()
{
      digitalWrite(op1,LOW);
      digitalWrite(op2,HIGH);
      digitalWrite(op3,LOW);
      digitalWrite(op4,HIGH);
}
void stand()
{
      digitalWrite(op1,LOW);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,LOW);
}
void power_right()
{
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,HIGH);
}
void power_left()
{
      digitalWrite(op1,LOW);
      digitalWrite(op2,HIGH);
      digitalWrite(op3,HIGH);
      digitalWrite(op4,LOW);
}

