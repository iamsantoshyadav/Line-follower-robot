int ip1=11,ip2=12,ip3=13,ip4=10,ip5=2,op1=4,op2=5,op3=6,op4=7,val1,val2,val3,val4;
void setup() {

  
  // put your setup code here, to run once:
  
  pinMode(ip1,INPUT);
  pinMode(ip2,INPUT);
  pinMode(ip3,INPUT);
  pinMode(ip4,INPUT);
  pinMode(op1,OUTPUT);
  pinMode(op2,OUTPUT);
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  
  
  

}

void loop() {
  
  val1=digitalRead(ip1);
  val2=digitalRead(ip2);
  val3=digitalRead(ip3);
  val4=digitalRead(ip4);
  if((val1==HIGH&&val2==HIGH&&val3==HIGH&&val4==HIGH)||(val1==LOW&&val2==LOW&&val3==LOW&&val4==LOW))
  {
    stret();
    delay(10);            /*CASE 15 AND CASE 0*/
    stand();
  }
  if ((val1==LOW&&val2==HIGH&&val3==HIGH&&val4==LOW)||(val1==HIGH&&val2==LOW&&val3==HIGH&&val4==HIGH))
  {
    right();
    delay(100);     /*CASE 6 */
    stand();        /*CASE 11*/
  }
 
   if(val1==LOW&&val2==LOW&&val3==HIGH&&val4==LOW)
   {
    right();
    delay(10);        /*CASE 2*/
    stand();
    
   }
   else if(val1==LOW&&val2==HIGH&&val3==LOW&&val4==LOW)
   {
        {
          left();
          delay(10);      /*CASE 4*/
          stand();
        }
   }
   
   
   if((val1==LOW&&val2==LOW&&val3==LOW&&val4==HIGH)||(val1==HIGH&&val2==LOW&&val3==LOW&&val4==LOW))
   {
    stret();
    delay(200);           /*CASE 1 AND CASE 8*/
    stand();
    delay(200);
   }
    
   if(val1==LOW&&val2==LOW&&val3==HIGH&&val4==HIGH||val1==LOW&&val2==HIGH&&val3==HIGH&&val4==HIGH)
   {
    
    power_right();
                        /*CASE 3 */
                       /*CASE 7 */
   }
   else if((val1==HIGH&&val2==HIGH&&val3==LOW&&val4==LOW)||(val1==HIGH&&val2==HIGH&&val3==HIGH&&val4==LOW))
   {
    {
      power_left();
                                 /*CASE 12*/
                                 /*CASE 14*/
      
    }      
                                
   }
   if (val1==HIGH&&val2==LOW&&val3==HIGH&&val4==LOW)
   {
    power_left();
    delay(200);                 /*CASE 10*/
    stand();
   }
   if (val1==HIGH&&val2==HIGH&&val3==LOW&&val4==HIGH)
   {
    right();
    delay(300);                 /*CASE 13*/
    stand();
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

