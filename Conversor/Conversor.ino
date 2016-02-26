int thisByte = 33;
void setup() 
{
  Serial.begin(9600);
  Serial.println("ASCII Table ~ Character Map");

}

void loop() 
{
 Serial.write(thisByte);
 Serial.print("dec:");
 Serial.print(thisByte,DEC);
 Serial.print("hex:");
 Serial.print(thisByte,HEX);
 Serial.print(",OCT:");
 Serial.print(",bin:");
 Serial.print(thisByte,BIN);

 if(thisByte ==126)
 {
  while(true)
  {
  }
 }
 thisByte++;
}
