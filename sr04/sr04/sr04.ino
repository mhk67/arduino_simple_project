int pingPin=13;
int echoPin=12;

void setup() {
  pinMode(pingPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long duration,cm;

  digitalWrite(pingPin,LOW) ;
  delayMicroseconds(2);
  digitalWrite(pingPin,HIGH) ;
  delayMicroseconds(5);
  digitalWrite(pingPin,LOW) ;

  duration= pulseIn(echoPin,HIGH);
  cm= microStoCm(duration);
  Serial.print(cm);
  Serial.println(" cm ");
  delay(100);
}

unsigned long microStoCm(unsigned long microS){
  return (microS/29)/2;
}
