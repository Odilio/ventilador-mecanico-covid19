#include <Servo.h>

Servo myservo;  

//variaveis
#define rate 16 // ciclos de respiração por minuto
#define enable_motor true 
#define max_speed 180
#define min_speed 0
#define PEEP_speed 40 //aproximadamente 5cm/H2O
#define led_pin 13
#define button_pin A5
#define current_pin A0
#define servo_pin 3
#define serial_baud 9600


void setup() {

  Serial.begin(serial_baud
  
  if(enable_motor){
    myservo.attach(servo_pin,1000,2000); // some motors need min/max setting
    
    Serial.print("Initializing ESC...");
    
    myservo.write(max_speed);
    delay(3000); // wait for esc to boot, and sample maximum
    myservo.write(min_speed);
    digitalWrite(led_pin, LOW);
    delay(2000);  // wait for esc to sample minimum

    digitalWrite(led_pin, HIGH);
    myservo.write(PEEP_speed);
    Serial.println("Done");  
  } else {
    Serial.println("Motor disabled.  Bypassing initialization");      
  }
  
  }
  
  void loop() {
  
  }
