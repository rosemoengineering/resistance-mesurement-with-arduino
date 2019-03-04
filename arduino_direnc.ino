int analogPin= 1;
int raw= 0;
int Vin= 5;
float Vout= 0;
float R1= 1000;
float R2= 0;


void setup()
{
Serial.begin(9600);
}

void loop()
{
raw= analogRead(analogPin);


Vout= (5*raw)/1023.0;
R2= R1 *((Vin/Vout) -1);

Serial.print("Vout: ");
Serial.println(Vout);
Serial.print("R2: ");
Serial.println(R2);
delay(1000);

}
