//// If you have the time and the will then you can use this code to test the hypersonic sensors too
//// We took it from the arm so I have no idea if they work or not
/// If everything works properly then you should be able to measure the distance of the objects from the sensor and print the distance on the serial bar/bus (idk what its called)
/// Define your pins properly (change them if you have to)
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  /// This works with serial bar but you can switch it for a display if you have one. Its gonne change pretty much nothing tho
  Serial.print("Distance: ");
  Serial.println(distance);
}

