//Capacitore.cc

#include "Capacitore.h"
#include <iostream>
#include <cmath>
using namespace std;

const double eps0 = 8.854e-12;

Capacitore::Capacitore(double a, double e, double s){
  area_ = a;
  eps_ = e;
  s_ = s;
  cap_ = eps0*eps_*area_/s_;
}

Capacitore::Capacitore(double cap){
  cap_ = cap;
}

double Capacitore::C(){
  return cap_;
}

double Capacitore::area(){return area_;}
double Capacitore::eps(){return eps_;}
double Capacitore::s(){return s_;}

Capacitore Capacitore::operator+(Capacitore& ce){
  double cap = (C()*ce.C())/(C() + ce.C());
  return Capacitore(cap);
}

Capacitore Capacitore::operator||(Capacitore& ce){
  double cap = C() + ce.C();
  return Capacitore(cap);
}


void Capacitore::print(){
  cout<<"La capacita Ã¨: "<< C() << endl;
}
