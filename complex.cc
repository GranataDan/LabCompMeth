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
double Complex::phi(){
  if (imaginary_>=0&&real_>0||imaginary_<0&&real_>0){return atan(imaginary_/real_);}
  if (imaginary_>=0&&real_<0){return M_PI-atan(abs(imaginary_/real_));}
  if (imaginary_<=0&&real_<0){return M_PI+atan(abs(imaginary_/real_));}
  if(real_==0&&imaginary_<0){return -M_PI/2;}
  if (real_==0&&imaginary_>0){return M_PI/2;}
 


}//modificare criteri fase
double Complex::mag(){return r();}
double Complex::phase(){return phi();}
Complex Complex::operator+( const Complex& rhs)const{
  double real= real_+rhs.real_;
  double imaginary=imaginary_+rhs.imaginary_;
  return Complex(real,imaginary);
}
Complex Complex::operator-( const Complex& rhs)const{
  double real= real_-rhs.real_;
  double imaginary=imaginary_-rhs.imaginary_;
  return Complex(real,imaginary);
}
Complex Complex::operator*(Complex& rhs){
  double r1=r()*rhs.r();
  double phi1=phi()+rhs.phi();
  double real=r1*cos(phi1);
  double imaginary=r1*sin(phi1);
  return Complex(real, imaginary);
}
Complex Complex::operator/(Complex& rhs){
  double r1=r()/rhs.r();
  double phi1=phi()-rhs.phi();
  double real=r1*cos(phi1);
  double imaginary=r1*sin(phi1);
  return Complex(real, imaginary);
}
//setters
void Complex::setre(double re){real_=re;}
void Complex::setim(double im){imaginary_=im;}
void Complex::print(){
  cout<<"Il numero complesso è: "<<real_<<"+"<<imaginary_<<"i"<<endl;}
