//Global input declearation section there are two input ports five out put port 
int ir2=13,ip1=12,ip2=11,op1=3,op2=4,op3=5,op4=6,val1,val2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir2,OUTPUT);    //for 5v supply to the one of the ir sensor 
  pinMode(ip1,INPUT);     //Input from first ir sensor
  pinMode(ip2,INPUT);     //Input from second ir sensor 
  pinMode(op1,OUTPUT);    //
  pinMode(op2,OUTPUT);    // setup for output pins 3,4,5,6
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  

}

void loop() {
  //main function starts from here
  digitalWrite(ir2,HIGH); // Providing 5v power supply to the second ir sensor
  val1=digitalRead(ip1);  //Reading data from ir sensors
  val2=digitalRead(ip2);
  if(val1==HIGH&&val2==HIGH)  //Condition for forward motion
  {
    digitalWrite(op1,HIGH); // for first motor
    digitalWrite(op2,LOW);
    digitalWrite(op3,HIGH);//for second motor
    digitalWrite(op4,LOW);
  }
  else 
  {
    delay (100000);
  }
  

}
