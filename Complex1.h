//complex.h
class Complex{
  //Interface or Member Functions
 public:
  // constructor
  Complex();
  Complex(double real, double imaginary);
  //getters
  double re();
  double im();
  double mag();
  double phase();
  double r();
  double phi();
  //setters
  void setim();
  void setre();
  void setmag();
  void setr();
  void setphi();
  void setphase();


  void print() 
  //Attributes or Data Members
 private:
  double real_;
  double imaginary_;
};
