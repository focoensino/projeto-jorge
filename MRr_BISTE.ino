#include <RoboCore_Vespa.h>

VespaMotors motores;

const int pino_TRIGGER = 25;
const int pino_ECHO = 26;

const int Distancia_OBSTACULO = 25;

const int Velocidade = 80;

const int ESPERA = 60;
const int ESPERA_Movimento = 250;

int Distancia;

void setup() {

Serial.begin(115200);
pinMode(pino_TRIGGER,OUTPUT);
pinMode(pino_ECHO,INPUT);

digitalWrite(pino_TRIGGER,LOW);

}
void loop() {

delay (ESPERA);

int distancia = sensor_ultrassonico(pino_TRIGGER,pino_ECHO);


if(distancia<=Distancia_OBESTACULO){

      delay (ESPERA);

       int distancia = sensor_ultrassonico(pino_TRIGGER,pino_ECHO);

        if(distancia<=Distancia_OBESTACULO){
          motores.estop();
          motores.bkward(VELOCIDADE);
          delay(espera_Movimento);
          motores.estop();

          if(millis() %2 == 0){
            
            motores(velocidade,-Velocidade);
            delay(espera}_movimento);
            motores.estope();
            distancia = sensor_ultrapassonico(PINO_TRIGGER,PINO_ECHO)
            
            
            
            }




          
        }








        
  }


}

int sensor_ultrassonico(int pinotrigger,int pinoecho){

digitalWrite(pino_TRIGGER,HIGH);
delayMicroseconds(10);
digitalWrite(pino_TRIGGER,LOW);
return pulseIn(pino_ECHO,HIGH)/58;
}
