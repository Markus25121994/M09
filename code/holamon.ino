//MARC DE DIAGO DELGADO
//1ER GS ELECTROMEDICINA CLINICA 

void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() 
{
  digitalWrite(3, HIGH);                              
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);                                 
  digitalWrite(A3, HIGH);  
  delay(1000);                       
  digitalWrite(A3, LOW); 
  digitalWrite(7, LOW);                                
  digitalWrite(9, LOW);
  digitalWrite(3, LOW); 
  delay(1000);                
}
