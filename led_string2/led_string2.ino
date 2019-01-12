const int led1 = 9;

const int sensor1 = A1;
int sensorValue1 = 0;
int mappedValue1 = 0;
int level1 = 0;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(led1, OUTPUT);

  pinMode(sensor1, INPUT);
 
}

void loop() {
  currentMillis = millis();
  mappedValue1 = analogRead(sensor1);

  Serial.print("Input level1: ");
  Serial.print(mappedValue1);
  sensorValue1 = ( mappedValue1) / 4;

  Serial.print("Mapped Sensor Values \t level1: ");
  Serial.print(sensorValue1);
  Serial.print("\n");

  if (level1 > 0 && currentMillis - previousMillis >= 25) {
     level1 = max(level1 - 16, 0);
  }
  if (sensorValue1  > 1) {
    level1 = 255;
  }
  analogWrite(led1, level1);
  
}
