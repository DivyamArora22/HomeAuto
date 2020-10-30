int tv = 8;
int fan = 9;
int light = 10;
int ac = 11;
String voice;
char c;

void setup() {
  Serial.begin(9600);
  pinMode(tv, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(light, OUTPUT);
  pinMode(ac, OUTPUT);
  digitalWrite(tv, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(light, LOW);
  digitalWrite(ac, LOW);

  

}

void loop() {
  while(Serial.available()){
    char c = Serial.read();

    if(c == '#'){
      break;
      }
     voice += c;
    }
  voice += c;
  
  if(voice.length()>0){
    
    if(voice == "*TV on" || voice == "*television on" || voice == "*Television on"|| voice == "*tv on" || voice == "*turn on tv") {
      digitalWrite(tv, HIGH);
      }
      
    else if(voice == "*fan on" || voice == "*Fan on" || voice == "*Turn on the fan") {
      digitalWrite(fan, HIGH);
      }
      
    else if(voice == "*light on" || voice == "*turn on the light" || voice == "*turn on the lights") {
      digitalWrite(light, HIGH);
      }
      
    else if(voice == "*Ac on" || voice == "*AC on" || voice == "*turn on the Ac") {
      digitalWrite(ac, HIGH);
      }
      
    
  
    else if(voice == "*TV off" || voice == "*television off" || voice == "*Television off"|| voice == "*tv off" || voice == "*turn off tv") {
      digitalWrite(tv, LOW);
      }
      
    else if(voice == "*fan off" || voice == "*Fan off" || voice == "*Turn off the fan") {
      digitalWrite(fan, LOW);
      }
      
    else if(voice == "*light off" || voice == "*turn off the light" || voice == "*turn off the lights") {
      digitalWrite(light, LOW);
      }
      
    else if(voice == "*Ac off" || voice == "*AC off" || voice == "*turn off the Ac") {
      digitalWrite(ac, LOW);
      }
      
voice="";

}

}
    
  
