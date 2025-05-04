int data;
//int led;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  //int data;
    
  // put your setup code here, to run once:

}

void loop() {
 digitalWrite(11,LOW);
  while(Serial.available()>0)
  {
    data=Serial.read();
    if (data==48){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
//      delay(10000);
//      digitalWrite(2,HIGH);
      continue;
      }
    else if(data==50)
    {
      digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
//  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
      digitalWrite(3,LOW);
//      delay(2000);
//      digitalWrite(3,HIGH);
      continue;
    }
    else if(data==51){
      
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);      
//  delay(2000);
//      digitalWrite(4,HIGH);
      continue;}
    else if(data==52)
    {
      
digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);      
//  delay(2000);
//      digitalWrite(5,HIGH);
      continue;}
    else if(data==53)
    {
digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);     
//  delay(2000);
//      digitalWrite(6,HIGH);
      continue;
    }
    else if(data==54)
    {
digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);     
//  delay(2000);
//      digitalWrite(7,HIGH);
      continue;
    }
    else if(data==55)
    {
digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);      
//  delay(2000);
//      digitalWrite(8,HIGH);
      continue;
    }
    else if(data==56)
    {
digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);      
//  delay(2000);
//      digitalWrite(9,HIGH);
      continue;
    }
    else if(data==57)
    {
digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);      
//  delay(2000);
//      digitalWrite(10,HIGH);
      continue;
    }
    /*else if(data==58)
      digitalWrite(10,HIGH);
    else if(data==59)
      digitalWrite(11,HIGH);*/
    
     
    }
    
    Serial.println(data);// put your main code here, to run repeatedly:
  }
