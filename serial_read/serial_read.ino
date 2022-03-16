char zeichen;
void setup() {
  Serial.begin(9600);
  
}

void loop() {
  delay(500);

  while(Serial.available() ) {

    char zeichen=(Serial.read());
    if(zeichen != 13) {
      Serial.println("output: ");
      Serial.println(zeichen);
      for ( uint8_t bitMask = 128; bitMask != 0; bitMask = bitMask >> 1 ) {
        if ( zeichen & bitMask ) {
          Serial.print('1');
        } else {
          Serial.print('0');
        }
      }
      Serial.println();
    }
  }
}
