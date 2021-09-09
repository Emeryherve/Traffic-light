int red_traffic_A = 11;
int green_traffic_A = 13;
int yellow_traffic_A = 12;

// Initalise the traffic 2
int red_traffic_B = 10;
int green_traffic_B = 9;
int yellow_traffic_B = 8;

// Initialise the traffic 3
int red_traffic_C = 7;
int green_traffic_C = 6;
int yellow_traffic_C = 5;

// Initialise the traffic 4
int red_traffic_D = 2;
int green_traffic_D = 3;
int yellow_traffic_D = 4;

// Initialise the traffic 5
int red_traffic_E = A0;
int green_traffic_E = A1;
int yellow_traffic_E = A2;


void setup() {
  // Set all pins as output
  pinMode(red_traffic_A, OUTPUT);
  pinMode(green_traffic_A, OUTPUT);
  pinMode(yellow_traffic_A, OUTPUT);
  
  pinMode(red_traffic_B, OUTPUT);
  pinMode(green_traffic_B, OUTPUT);
  pinMode(yellow_traffic_B, OUTPUT);
  
  pinMode(red_traffic_C, OUTPUT);
  pinMode(green_traffic_C, OUTPUT);
  pinMode(yellow_traffic_C, OUTPUT);
  
  pinMode(red_traffic_D, OUTPUT);
  pinMode(green_traffic_D, OUTPUT);
  pinMode(yellow_traffic_D, OUTPUT);

  pinMode(red_traffic_E, OUTPUT);
  pinMode(green_traffic_E, OUTPUT);
  pinMode(yellow_traffic_E, OUTPUT);
}

void loop() {
  digitalWrite(red_traffic_A, LOW);   
  digitalWrite(green_traffic_A, HIGH);
  digitalWrite(yellow_traffic_A, LOW);
  
  digitalWrite(red_traffic_B, HIGH);
  digitalWrite(green_traffic_B, LOW);   
  digitalWrite(yellow_traffic_B, LOW);
  
  digitalWrite(red_traffic_C, LOW);
  digitalWrite(green_traffic_C, HIGH);
  digitalWrite(yellow_traffic_C, LOW);   
  
  digitalWrite(red_traffic_D, HIGH);
  digitalWrite(green_traffic_D, LOW);
  digitalWrite(yellow_traffic_D, LOW);

  analogWrite(red_traffic_E, HIGH);
  analogWrite(green_traffic_E, LOW);
  analogWrite(yellow_traffic_E, LOW);
  
  delay(1000);                
  
  digitalWrite(red_traffic_A, HIGH);   
  digitalWrite(green_traffic_A, LOW);
  digitalWrite(yellow_traffic_A, LOW);
  
  digitalWrite(red_traffic_B, LOW);
  digitalWrite(green_traffic_B, HIGH);   
  digitalWrite(yellow_traffic_B, LOW);
  
  digitalWrite(red_traffic_C, HIGH);
  digitalWrite(green_traffic_C, LOW);
  digitalWrite(yellow_traffic_C, LOW);  
  
  digitalWrite(red_traffic_D, LOW);
  digitalWrite(green_traffic_D, HIGH);
  digitalWrite(yellow_traffic_D, LOW);

  analogWrite(red_traffic_E, LOW);
  analogWrite(green_traffic_E, HIGH);
  analogWrite(yellow_traffic_E, LOW);
  
  delay(1000);                      

  digitalWrite(red_traffic_A, LOW);  
  digitalWrite(green_traffic_A, HIGH);
  digitalWrite(yellow_traffic_A, LOW);
  
  digitalWrite(red_traffic_B, HIGH);
  digitalWrite(green_traffic_B, LOW);  
  digitalWrite(yellow_traffic_B, LOW);
  
  digitalWrite(red_traffic_C, LOW);
  digitalWrite(green_traffic_C, HIGH);
  digitalWrite(yellow_traffic_C, LOW); 
  
  digitalWrite(red_traffic_D, HIGH);
  digitalWrite(green_traffic_D, LOW);
  digitalWrite(yellow_traffic_D, LOW);

  analogWrite(red_traffic_E, HIGH);
  analogWrite(green_traffic_E, LOW);
  analogWrite(yellow_traffic_E, LOW);
  
  delay(1000);    

  digitalWrite(red_traffic_A, LOW);  
  digitalWrite(green_traffic_A, HIGH);
  digitalWrite(yellow_traffic_A, LOW);
  
  digitalWrite(red_traffic_B, HIGH);
  digitalWrite(green_traffic_B, LOW);  
  digitalWrite(yellow_traffic_B, LOW);
  
  digitalWrite(red_traffic_C, LOW);
  digitalWrite(green_traffic_C, HIGH);
  digitalWrite(yellow_traffic_C, LOW); 
  
  digitalWrite(red_traffic_D, HIGH);
  digitalWrite(green_traffic_D, LOW);
  digitalWrite(yellow_traffic_D, LOW);

  analogWrite(red_traffic_E, HIGH);
  analogWrite(green_traffic_E, LOW);
  analogWrite(yellow_traffic_E, LOW);
  
  delay(1000); 
}
