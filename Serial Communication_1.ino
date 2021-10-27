/*Serial Communication

char incomingData; // for incoming serial data and type
void setup() {
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0 ){ // reply only when you receive data:
  incomingData=Serial.read();  // read the incoming byte:

  // say what you got:
  Serial.print("I received Decimal : ");
  Serial.println(incomingData,DEC); //DEC means Decimal value

  Serial.print("I received HEX : ");
  Serial.println(incomingData,HEX); //HEX means Hex value
  
  Serial.print("I received Octal: ");
  Serial.println(incomingData,OCT); //OCT means Octal value

  Serial.print("I received Binary : ");
  Serial.println(incomingData,BIN); //BIN means Binary value

  Serial.print("I received: ");
  Serial.println(incomingData); // ASCII value
   
  }
}
