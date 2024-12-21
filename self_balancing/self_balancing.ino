// Motor A
int motor1pin1 = 2;
int motor1pin2 = 3;

// Motor B
int motor2pin1 = 4;
int motor2pin2 = 5;

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void front() {
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void back() {
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
}

void loop() {

  analogWrite(9, 200); // PWM Speed Control motor A
  analogWrite(10, 200); // PWM Speed Control motor B

  front();
  delay(3000);

  back();
  delay(3000);
}