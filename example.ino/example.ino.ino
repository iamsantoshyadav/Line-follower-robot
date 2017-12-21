int ir1=1,ir2=2,ip1=11,ip2=12,op1=4,op2=5,op3=6,op4=7,val1,val2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir1,OUTPUT);
  pinMode(ir2,OUTPUT);
  pinMode(ip1,INPUT);
  pinMode(ip2,INPUT);
  pinMode(op1,OUTPUT);
  pinMode(op2,OUTPUT);
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  

}

void loop() {
  digitalWrite(ir1,HIGH);
  digitalWrite(ir2,HIGH);
  val1=digitalRead(ip1);
  val2=digitalRead(ip2);
    if (val2==HIGH&&val1==LOW)
    {
      
      digitalWrite(op3,LOW);
      digitalWrite(op4,HIGH);
    }
    else
    {
      digitalWrite(op1,LOW);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,LOW);
    }
    
}
