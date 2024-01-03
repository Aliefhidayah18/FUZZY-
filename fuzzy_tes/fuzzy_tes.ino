//---------Fuzzy 2.1 prelauch----------

//-----iNPUT SETPOINT-------
float inputec;
float inputph;

//----INPUT ERROR---------------
float ph;
float hasilec;

//----------fuzzy declare-------------
#include <Fuzzy.h>
Fuzzy *fuzzy = new Fuzzy();

//----fuzzy input Error pH-----
FuzzySet *LN        = new FuzzySet(-2, -2, -1.5, -1);
FuzzySet *FN        = new FuzzySet(-1.5, -1, -1, -0.5);
FuzzySet *SN        = new FuzzySet(-1, -0.5, -0.5, 0);
FuzzySet *ZERO01    = new FuzzySet(-0.5, 0, 0, 0.5);
FuzzySet *sp        = new FuzzySet(0, 0.5, 0.5, 1);
FuzzySet *FP        = new FuzzySet(0.5, 1, 1, 1.5);
FuzzySet *LP        = new FuzzySet(1, 1.5, 2, 2);

//----Fuzzy input error EC----
FuzzySet *N6       = new FuzzySet(-2, -2, -1.8, -1.6);
FuzzySet *N5       = new FuzzySet(-1.8, -1.6, -1.6, -1.4);
FuzzySet *N4       = new FuzzySet(-1.6, -1.3, -1.3, -1);
FuzzySet *N3       = new FuzzySet(-1.2, -1, -1, -0.8);
FuzzySet *N2       = new FuzzySet(-1, -0.7, -0.7, -0.4);
FuzzySet *N1       = new FuzzySet(-0.6, -0.4, -0.4, -0.2);
FuzzySet *ZERO02   = new FuzzySet(-0.4, -0.2, 0, 0);

//----Fuzzy Output phD-----
FuzzySet *ZERO1       = new FuzzySet(0, 0, 0, 2);
FuzzySet *SEBENTAR1     = new FuzzySet(10, 20, 20, 30);
FuzzySet *SEDANG1       = new FuzzySet(20, 30, 40, 50);
FuzzySet *LAMA1         = new FuzzySet(40, 50, 60, 60);

//---Fuzzy Output phU------
FuzzySet *ZERO2        = new FuzzySet(0, 0, 0, 2);
FuzzySet *SEBENTAR2    = new FuzzySet(5, 10, 10, 15);
FuzzySet *SEDANG2      = new FuzzySet(10, 15, 20, 25);
FuzzySet *LAMA2        = new FuzzySet(20, 25, 30, 30);

//---Fuzzy Output ABMIX------
FuzzySet *ZERO3         = new FuzzySet(0, 0, 0, 2);
FuzzySet *SEBENTAR3     = new FuzzySet(20, 40, 40, 60);
FuzzySet *SEDANG3       = new FuzzySet(40, 60, 80, 100);
FuzzySet *LAMA3         = new FuzzySet(80, 100, 120, 120);

//---------POMPA-----------
int pump1 = 5;
int pump2 = 6;
int pump3 = 7;
float pompa1;
float pompa2;
float pompa3;
unsigned long prev_pump1    = 0;
unsigned long prev_pump2    = 0;
unsigned long prev_pump3    = 0;
unsigned long initiate_start = 0;
int pump_state1 = false;
int pump_state2 = false;
int pump_state3 = false;

//-------Deklarasi Fungsi--------
#include "Fuzzy_Rules.h"
#include "Fuzzy_Set.h"



void setup()
{
  Serial.begin(9600);

  //-----Pin Output-----
  pinMode(pump1, OUTPUT);// Ph Up
  pinMode(pump2, OUTPUT);// Ph Down
  pinMode(pump3, OUTPUT);// AB-MIX

  //---normally open------
  digitalWrite(pump1, LOW); // Ph Up
  digitalWrite(pump2, LOW); // Ph Down
  digitalWrite(pump3, LOW); // AB-MIX
  //----FUZZY INITIATE-------
  sets();
  rules();
}


void loop()
{
  //-------------Fungsi Read sensor-----------

  ph = random(-2,2);
  hasilec = random(-2,0);


  Serial.print("pH    ");
  Serial.print(ph);
  Serial.print("  ");
  Serial.print("EC ");
  Serial.print(hasilec);
  Serial.println("");
  Serial.print(ph);  Serial.print(" ");
  Serial.print(hasilec);   Serial.print(" ");
  Serial.println(" ");

  fuzzy->setInput(2, hasilec);
  fuzzy->setInput(1, ph);
  fuzzy->fuzzify();

  float pompa1 = fuzzy->defuzzify(1);//pHDOWN
  float pompa2 = fuzzy->defuzzify(2);//pHUP
  float pompa3 = fuzzy->defuzzify(3);//ABMIX

  //-----------PUMP ALGORITHM--------------------
  long int pompa01 = pompa1 * 1000;
  long int pompa02 = pompa2 * 1000;
  long int pompa03 = pompa3 * 1000;

  unsigned long intiate_start = millis();

  //pompa1
  if (intiate_start - prev_pump1 > pompa01)
  {
    pump_state1 = !pump_state1;

    if (pump_state1)
    {
      digitalWrite(pump1, HIGH);
    }
    else
    {
      digitalWrite(pump1, LOW);
    }
    prev_pump1 = initiate_start;
  }

  //pompa2
  if (intiate_start - prev_pump2 > pompa02)
  {
    pump_state2 = !pump_state2;

    if (pump_state2)
    {
      digitalWrite(pump2, HIGH);
    }
    else
    {
      digitalWrite(pump2, LOW);
    }
    prev_pump2 = initiate_start;
  }

  //pompa3
  if (intiate_start - prev_pump3 > pompa03)
  {
    pump_state3 = !pump_state3;

    if (pump_state3)
    {
      digitalWrite(pump3, HIGH);
    }
    else
    {
      digitalWrite(pump3, LOW);
    }
    prev_pump3 = initiate_start;
  }

  Serial.println("Result= ");
  Serial.println("");
  Serial.print(" Pompa1 pHDOWN: ");
  Serial.println(pompa01);
  Serial.print(" pompa2 phUP  : ");
  Serial.println(pompa02);
  Serial.print(" pompa3 ABMIX : ");
  Serial.println(pompa03);
  Serial.println("");
  Serial.println("");
  Serial.println("");
  delay (2000);

}
