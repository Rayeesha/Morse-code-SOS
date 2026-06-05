const int red=12;
const int unit=100; 
void setup()
{
  pinMode(red, OUTPUT);
}

void loop()
{
  for(int i=0;i<3;i++){
  	digitalWrite(red, HIGH);
  	delay(unit);
  	digitalWrite(red, LOW);
    delay(unit);}
  delay(2*unit);
  for(int i=0;i<3;i++){
  	digitalWrite(red, HIGH);
  	delay(3*unit);
  	digitalWrite(red, LOW);
    delay(unit);}
  delay(2*unit);
  for(int i=0;i<3;i++){
  	digitalWrite(red, HIGH);
  	delay(unit);
  	digitalWrite(red, LOW);
    delay(unit);}
  delay(6*unit);
}