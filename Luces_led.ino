
//Secuencias con leds...

int led1 = 8;//declaracion de variables segun el pin de conexión.
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;


void setup() {
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);

  
}

void loop() {
//Sencuencia1- encender leds con un tiempo de medio segundo.
digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led2,HIGH);
delay(500);
digitalWrite(led3,HIGH);
delay(500);
digitalWrite(led4,HIGH);
delay(500);
digitalWrite(led5,HIGH);
delay(500);
digitalWrite(led6,HIGH);
delay(500);




//Sencuencia2- apagar leds con un tiempo de medio segundo.
digitalWrite(led6,LOW);
delay(500);
digitalWrite(led5,LOW);
delay(500);
digitalWrite(led4,LOW);
delay(500);
digitalWrite(led3,LOW);
delay(500);
digitalWrite(led2,LOW);
delay(500);
digitalWrite(led1,LOW);
delay(500);
}
