int ip1=11,ip2=12,ip3=13,op1=4,op2=5,op3=6,op4=7,val1,val2,val3;
void setup() {

  pinMode(ip1,INPUT);
  pinMode(ip2,INPUT);
  pinMode(ip3,INPUT);
  pinMode(op1,OUTPUT);
  pinMode(op2,OUTPUT);
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  

}

void loop() {
  
  val1=digitalRead(ip1);
  val2=digitalRead(ip2);
  val3=digitalRead(ip3);
  if(val1==LOW&&val2==LOW||val1==HIGH&&val2==HIGH)
  {
    
    digitalWrite(op1,HIGH);
    digitalWrite(op2,LOW);
    digitalWrite(op3,HIGH);
    digitalWrite(op4,LOW);
    
   
  }
  else 
    {
      digitalWrite(op1,LOW);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,LOW);
    }
    if (val1==LOW&&val2==HIGH)
    {
      
      digitalWrite(op1,LOW);
      digitalWrite(op2,HIGH);
      digitalWrite(op3,HIGH);
      digitalWrite(op4,LOW);
      
    }
     if (val1==HIGH&&val2==LOW)
    {
     
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,HIGH);
      
    }
    if (val2==HIGH&&val3==HIGH)
    {
      val1=LOW;
      
    }
    if (val1==LOW&&val2==HIGH&&val3==HIGH||val1==HIGH&&val2==HIGH&&val3==HIGH)
    {
      
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      
    }
}
