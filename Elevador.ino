int Piso=0;

void setup() 
{
 pinMode(7,INPUT);
 pinMode(6,INPUT);
 pinMode(5,INPUT);
 pinMode(10,INPUT);                   
 pinMode(2,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(9,INPUT);
 pinMode(8,INPUT);
Serial.begin(9600);

if (digitalRead(7)==0){
Piso=1;
}

if (digitalRead(6)==0){
  Piso=2;
}
if (digitalRead(5)==0){
  Piso=3;
  }
}


void loop() 
{
if(digitalRead(10)==1){
  delay(300);
  while(!(digitalRead(7)==0)){
  
    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    analogWrite(3,250);      
  }
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  analogWrite(3,250);
  Piso=1;   
}


if(digitalRead(9)==1){
  delay(300);
  if(Piso==1){
    while(!(digitalRead(6)==0)){
      digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    analogWrite(3,250);
    }
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    analogWrite(3,250);
    Piso=2;
  }
if (Piso==3){
  while(!(digitalRead(6)==0)){
     digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    analogWrite(3,250); 
  }
   digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    analogWrite(3,250); 
    Piso=2;
}
}

if(digitalRead(8)==1){
  delay(300);
    while(!(digitalRead(5)==0)){
      digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    analogWrite(3,250);
    }
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    analogWrite(3,250);
    Piso=3;
  }
  Serial.println(Piso);     
  }
