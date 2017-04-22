int pir1 = 10;
int pir2 = 9;
int pir3 = 8;

int piezo = 5;

int pirVal1 = LOW;
int pirVal2 = LOW;
int pirVal3 = LOW;

void setup()
{
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  pinMode(pir3, INPUT);
 
  pinMode(piezo, OUTPUT); 
  
}

void loop()
{
  pirVal1 = digitalRead(pir1);
  pirVal2 = digitalRead(pir2);
  pirVal3 = digitalRead(pir3);

  if(pirVal1 == HIGH || pirVal2 == HIGH || pirVal3 == HIGH)
  {
     digitalWrite(piezo, HIGH);
  }
  else
  {
    digitalWrite(piezo, LOW);
  }
}
