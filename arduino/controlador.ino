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
    myservo.attach(servo_pin,1000,2000); // alguns motores podem precisar da definição de minimo e máximo
    
    Serial.print("Inicializando");
    
    myservo.write(max_speed);
    delay(3000); // Espera o ESC iniciar
    myservo.write(min_speed);
    digitalWrite(led_pin, LOW);
    delay(2000);  
    // processo de teste inicial
    digitalWrite(led_pin, HIGH);
    myservo.write(PEEP_speed);
    Serial.println("Done");  
  } else {
    Serial.println("Motor desabilitado");      
  }
  
  }
  
  void loop()                                               // Loop infinito
{
    Speed = analogRead(pino_pot);                         // Le o valor do potenciometro
    Speed = map(Speed, 0, 1023, 0, 179);                  // Converte o valor para uma faixa entre 0 e 179
    Serial.print("Valor Speed: ");                        // Mostra o valor da velocidade na porta serial
    Serial.println(Speed);                                // Escreve a velocidade na serial
    Esc30A.write(Speed);                                  // Ajusta a velocidade conforme potenciometro
}
