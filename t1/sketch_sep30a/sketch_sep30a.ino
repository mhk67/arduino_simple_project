int led_green =13;
int led_yellow =12;
int led_red =11;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_green,OUTPUT);
  pinMode(led_yellow,OUTPUT);
  pinMode(led_red,OUTPUT);
}

void loop() {
  led_controler(led_green);
  delay(300);
  led_controler(led_yellow);
  delay(300);
  led_controler(led_red);
  delay(300);
}

void led_controler(int led_on){
  if (led_on==led_green){
    digitalWrite(led_green,HIGH);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_red,LOW);  
  }else if(led_on==led_yellow){
    digitalWrite(led_green,LOW);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_red,LOW);    
  }else{
    digitalWrite(led_green,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_red,HIGH);        
   }
}
