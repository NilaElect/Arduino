//Serial Communication
//ASCII Table

char incomingData; // for incoming serial data and type
void setup() {
  Serial.begin(9600);
  Serial.println("   ASCII Table ");
  Serial.println("---------------------------------------------------- ");
  Serial.println("   Decimal     Octal    Hex      Binary      Value ");
  Serial.println("---------------------------------------------------- ");
}

void loop() {
  if(Serial.available()>0 ){ // reply only when you receive data:
  incomingData=Serial.read();  // read the incoming byte:

  // say what you got:
  Serial.print("\t");
  Serial.print(incomingData,HEX); //HEX means Hex value
  Serial.print("\t");
  Serial.print(incomingData,DEC); //DEC means Decimal value
  Serial.print("\t");
  Serial.print(incomingData,OCT); //OCT means Octal value
  Serial.print("\t");
  Serial.print(incomingData,BIN); //BIN means Binary value
  Serial.print("\t\t");
  Serial.print(incomingData); //DEC means Binary value
  Serial.println(""); 
  }
}
