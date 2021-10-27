// vector3D.h

class Vector3D {

 public:
  Vector3D(double x, double y, double z);

  double x();
  double y();
  double z();

  double r();
  double theta();
  double phi();

  double scalar(const Vector3D&);
  Vector3D vector(const Vector3D&);

  double angle(Vector3D&);
  Vector3D sum(const Vector3D&);
  Vector3D diff(const Vector3D&);

  Vector3D prodotto(const double& num);
  Vector3D divisione(const double& num);

  void setX(double);
  void setY(double);
  void setZ(double);

  void print(const int&);
  
 private:
  
  double x_;
  double y_;
  double z_;

};
