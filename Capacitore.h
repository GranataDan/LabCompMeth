// Capacitore.h
#ifndef Capacitore_h
#define Capacitore_h

#include <iostream>
#include <cmath>
using namespace std;

class Capacitore{
 public:

  Capacitore(double, double, double);
  Capacitore(double);

  double C();
  double area();
  double eps();
  double s();

  Capacitore operator+(Capacitore&);
  Capacitore operator||(Capacitore&);

  void print();

 private:
  double area_;
  double eps_;
  double s_;
  double cap_;

};

#endif
