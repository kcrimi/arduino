const int led1 = 9;
const int led2 = 10;

const int sensor1 = A1;
const int sensor2 = A2;
int mappedValue1 = 0;
int sensorValue1 = 0;
int level1 = 0;
int mappedValue2 = 0;
int sensorValue2 = 0;
int level2 = 0;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
 
}

void loop() {
  currentMillis = millis();
  sensorValue1 = analogRead(sensor1);
  sensorValue2 = analogRead(sensor2);
//
//  Serial.print("Input level1: ");
//  Serial.print(sensorValue1);
//  Serial.print("Input level2: ");
//  Serial.print(sensorValue2);
  mappedValue1 = (sensorValue1) / 4;
  mappedValue2 = (sensorValue2) / 4;

//  Serial.print("\tMapped Sensor Values level1: ");
//  Serial.print(mappedValue1);
//  Serial.print("\tMapped Sensor Values level2: ");
//  Serial.print(mappedValue2);
//  Serial.print("\n");
//
//
//  if (level2 > 0 && currentMillis - previousMillis >= 25) {
//    level2 = max(level2 - 16, 0);
//  }
//  if (mappedValue2  > 1) {
//    level2 = 255;
//  }
//  analogWrite(led2, level2);
  
}
