/* Prueba del Puente H (L293D) 
Dibujo de las conexiones en www.elprofegarcia.com

ARDUINO   L293D(Puente H)        
  5          10
  6          15
  9          7
  10         2
  5V         1, 9, 16
  GND        4, 5, 12, 13
  
  El motor 1 se conecta a los pines 3 y 6 del Puente H
  El motor 2 se conecta a los pines 11 y 14 del Puente H
  
  La fuente de alimentacion de los Motores se conecta a tierra y
  el positivo al pin 8 del puennte H.  

*/
int izqA = 5; 
int izqB = 6; 
int derA = 9; 
int derB = 10; 
int vel = 255; // Velocidad de los motores (0-255)

void setup()  { 
  pinMode(derA, OUTPUT);
  pinMode(derB, OUTPUT);
  pinMode(izqA, OUTPUT);
  pinMode(izqB, OUTPUT);
 } 
 
void loop()  { 

    // Parar 
    analogWrite(derB, 0);     
    analogWrite(izqB, 0); 
    analogWrite(derA, 0);    
    analogWrite(izqA, 0);

    delay (1000);
    
    //frente    
    analogWrite(derB, 0);     
    analogWrite(izqB, 0); 
    analogWrite(derA, vel);  
    analogWrite(izqA, vel);       
     
    delay (2000);

   //derecha 
    analogWrite(derB, 0);     
    analogWrite(izqB, 0);
    analogWrite(izqA, 0);
    analogWrite(derA, vel);  

    delay (500);
    //izquierda
    analogWrite(derB, 0);     
    analogWrite(izqB, 0); 
    analogWrite(derA, 0);  
    analogWrite(izqA, vel);      
    delay (500);

    //parar  
    analogWrite(derB, 0);     
    analogWrite(izqB, 0); 
    analogWrite(derA, 0);    
    analogWrite(izqA, 0);    
    delay (1000);

    
    // reversa  
    analogWrite(derA, 0);    
    analogWrite(izqA, 0);
    analogWrite(derB, vel);  
    analogWrite(izqB, vel);          
    delay (2000);  
                        
}
