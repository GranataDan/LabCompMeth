//vector3D.cc

#include "vector3D.h"
#include <iostream>
#include <cmath>

using namespace std;
/*
Vector3D::Vector3D(){
  x_ = 0.;
  y_ = 0.;
  z_ = 0.;
}
*/
Vector3D::Vector3D(double x, double y, double z){
  x_ = x;
  y_ = y;
  z_ = z;
}

double Vector3D::x(){return x_;}
double Vector3D::y(){return y_;}
double Vector3D::z(){return z_;}

double Vector3D::r(){return sqrt(x_*x_ + y_*y_ + z_*z_);}
double Vector3D::theta(){return acos(z_/r());}
double Vector3D::phi(){
  if(x_ != 0.){
    return atan(y_/x_);
  } if(x_ == 0. && y_ < 0){
    return -M_PI/2.;
  } if(x_ == 0. && y_ > 0){
    return M_PI/2.;
  } else{return 9;}
}

double Vector3D::scalar(const Vector3D& vett){
  return x_*vett.x_ + y_*vett.y_ + z_*vett.z_;
}

Vector3D Vector3D::vector(const Vector3D& vett){
  double x1 = y_*vett.z_ - z_*vett.y_;
  double x2 = z_*vett.x_ - x_*vett.z_;
  double x3 = x_*vett.y_ - y_*vett.x_;
  return Vector3D(x1, x2, x3);
}

double Vector3D::angle(Vector3D& vett){
  return acos(scalar(vett)/(r()*vett.r()));
}

Vector3D Vector3D::sum(const Vector3D& vett){
  return Vector3D(x_+vett.x_, y_+vett.y_, z_+vett.z_);
}

Vector3D Vector3D::diff(const Vector3D& vett){
  return Vector3D(x_-vett.x_, y_-vett.y_, z_-vett.z_);
}

Vector3D Vector3D::prodotto(const double& num){
  x_*=num;
  y_ *= num;
  z_ *= num;
  return Vector3D(x_, y_, z_);
}

Vector3D Vector3D::divisione(const double& num){
  x_/=num;
  y_ /= num;
  z_ /= num;
  return Vector3D(x_, y_, z_);
}

void Vector3D::setX(double x){x_ = x;}
void Vector3D::setY(double y){y_ = y;}
void Vector3D::setZ(double z){z_ = z;}

void Vector3D::print(const int& i){
  cout <<"il vettore ["<< i << "] ha coordinate:"<< endl;
  cout <<"x = "<< x_ << endl;
  cout <<"y = "<< y_ << endl;
  cout <<"z = "<< z_ << endl;

  cout<<"r = "<< r()<< endl<<"theta = "<< theta()<< endl <<"phi = "<<phi()<<endl<<endl;
}
