//complex.cc
#include "complex.h"
#include <iostream>
#include <cmath>

using namespace std;
//constructor
Complex::Complex(){
  real_=0.;
  imaginary_=0.;
}
Complex::Complex(double real, double imaginary){
  real_=real;
  imaginary_=imaginary;
}
//getters
double Complex::re(){ return real_;}
double Complex::im(){return imaginary_;}
double Complex::r(){return sqrt(real_*real_+imaginary_*imaginary_);}
double Complex::phi(){return atan(imaginary_/real_);}
double Complex::mag(){return r();}
double Complex::phase(){return phi();}
//setters
void Complex::setre(double re){real_=re;}
void Complex::setim(double im){imaginary_=im;}
void Complex::print(){
  cout<<"Il numero complesso è: "<<real_<<"+"<<imaginary_<<"i"<<endl;}
