//MARC DE DIAGO DELGADO
//1ER GS ELCTROMEDICINA CLINICA
void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() 
{
    digitalWrite(9, HIGH);
    delay(2000);
    
    digitalWrite(A3, HIGH);
    digitalWrite(9, LOW);
    delay(1000);
    
    digitalWrite(A3, LOW);
    digitalWrite(7, HIGH);
    delay(500);
    
    digitalWrite(7, LOW);
    digitalWrite(3, HIGH);
    delay(250);
    
    digitalWrite(3, LOW);
    delay(1500);
}
