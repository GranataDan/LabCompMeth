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
  Complex operator+(const Complex& rhs)const;
  Complex operator-(const Complex& rhs)const;
  Complex operator*(Complex& rhs);
  Complex operator/(Complex& rhs);
  //setters
  void setim(double im);
  void setre(double re);
  void setmag();
  void setr();
  void setphi();
  void setphase();
  void print();
  //Attributes or Data Members
 private:
  double real_;
  double imaginary_;
};
