int i;
const byte NUM=8;
const byte led[]={7,8,9,10,11,12,13,14};
const int delaytime=300;
void setup() {
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW); 
  }
}

void loop() {
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],HIGH);    
  }
  delay(delaytime);
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);    
  }
  delay(delaytime);
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],HIGH);    
  }
  delay(delaytime);
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);    
  }
  delay(delaytime);
  
  for(i=0;i<NUM;i++)
  {
    digitalWrite(led[i],HIGH);
    delay(delaytime);
    digitalWrite(led[i],LOW);  
  }
    for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);    
  }
    delay(delaytime);


  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],HIGH);    
  }
  delay(delaytime);
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);    
  }
  delay(delaytime);
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],HIGH);    
  }
  delay(delaytime);
  for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);    
  }
  delay(delaytime);

  for(i=NUM-1;i>=0;i--)
  {
    digitalWrite(led[i],HIGH);
    delay(delaytime);
    digitalWrite(led[i],LOW);  
  }
    for(i=0;i<NUM;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);    
  }
    delay(delaytime);

}
