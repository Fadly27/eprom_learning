int led = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
for(int i=1; i<=5; i++){
  
  if(i<=5){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    }
}

digitalWrite(led,HIGH);
delay(1000);
//digitalWrite(led,LOW);
//delay(1000);
//digitalWrite(led,HIGH);
//delay(1000);
//digitalWrite(led,LOW);
//delay(1000);
//digitalWrite(led,HIGH);
//delay(1000);
//digitalWrite(led,LOW);
//delay(1000);
//digitalWrite(led,HIGH);
//delay(1000);
//digitalWrite(led,LOW);
//delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
//for(int i=0,i++);{
//  digitalWrite(led,HIGH);
//  delay(1000);
//  digitalWrite(led,LOW);
//  delay(1000);
//}

}
