
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
 }


void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(200);                  // wait for 200ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(200);                  // wait for 200ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(200);               // wait for 200ms
  digitalWrite(LED4, HIGH);    // turn pn LED1
  delay(200);                  // wait for 200ms
  digitalWrite(LED1, HIGH);     // turn off LED1
  delay(300);                  // wait for 300ms
  digitalWrite(LED2, HIGH);     // turn off LED2
  delay(300);                  // wait for 300ms
  digitalWrite(LED3, HIGH);     // turn off LED3
  delay(300);                  // wait for 300ms 
  digitalWrite(LED4, HIGH);    // turn off LED4
  delay(300);                  // wait for 300ms before running program all over again    
}
