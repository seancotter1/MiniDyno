

#include <HX711.h> // library containing premade functions needed to determine calibration factor

const int CLK = 3; //Load cell clock pin
const int DOUT = 4; //Load cell data pin
HX711 loadcell;


void setup() {
  loadcell.begin(DOUT, CLK); //Setting pins for output and input respectively
  Serial.begin(9600);    //Arduino Mega to Laptop at 9600 bits per second
  loadcell.set_scale();  //Start with no value ()
  loadcell.tare();  //Zeroing

}

void loop() {
  delay(1000);
  Serial.println(loadcell.get_units(10)); //prints to IDE the readings from the loadcell.

}
