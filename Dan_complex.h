//complex.h

class Complex {
public:

  Complex(double real, double imaginary);
  
  double real();
  double imaginary();

  void setReal();
  void setImaginary();

  void print();


private:
  double real_;
  double imaginary_;
};
