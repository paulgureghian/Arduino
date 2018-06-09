void setup() {
  
  pinMode (13, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  
  if (Serial.available()) {
    int value = Serial.read();
    if (value == 49) {
      Serial.println("Serial is 49, lights on");
      digitalWrite (13, HIGH);
    }
    else if (value == 48) {
      Serial.println("Serial is 48, lights off");
      digitalWrite (13, LOW);
    }
    else {Serial.print("Serial is ");
          Serial.print(value);
          Serial.println(", Unknown value...");
         }
      }
  }
               
      
