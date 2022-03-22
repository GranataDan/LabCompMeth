//Capacitore.cpp
#include "Capacitore.h"
#include <iostream>
#include <cmath>
#include "TRandom3.h"
#include <fstream>

int main(){

  int i = 0;
  double c;
  Capacitore c2(10);
  Capacitore c3(5);
  Capacitore c4(15);

  ofstream outfile;
  outfile.open("caparezza.dat");

  TRandom3* gen = new TRandom3();
  gen->SetSeed(0);

  Capacitore c34 = c3 || c4;

  for(i = 0; i < 1000; i++){

  c = 1 + gen->Uniform(99);               //distribuzione uniforme (1, 100)
  //c = gen->Gaus(media, sigma)             distribuzione gaussiana
  outfile << c << " ";
  Capacitore c1(c);
  Capacitore c12 = c1 || c2;
  Capacitore ceq = c12 + c34;
  outfile << ceq.C() << endl;
  }

  outfile.close();

  return 0;
}
