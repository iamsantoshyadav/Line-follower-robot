int ir2=13,ip1=12,ip2=11,op1=3,op2=4,op3=5,op4=6,val1,val2,value3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir2,OUTPUT);
  pinMode(ip1,INPUT);
  pinMode(ip2,INPUT);
  pinMode(op1,OUTPUT);
  pinMode(op2,OUTPUT);
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  

}

void loop() {
  digitalWrite(ir2,HIGH);
  val1=digitalRead(ip1);
  val2=digitalRead(ip2);
  if(val1==HIGH&&val2==HIGH)
  {
    digitalWrite(op1,HIGH);
    digitalWrite(op2,LOW);
    digitalWrite(op3,HIGH);
    digitalWrite(op4,LOW);
  }
  else 
  {
    delay (100000);
  }
  

}
