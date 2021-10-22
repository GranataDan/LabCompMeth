//complex.cpp
#include "complex.h"
#include <iostream>
using namespace std;
int main(){
  Complex c1(2,3);
  c1.print();
  cout<<c1.r()<<endl;
  cout<<c1.phi()<<endl;
  Complex c2(4,5);
  c2.print();
  cout<<c2.r()<<endl;
  cout<<c2.phi()<<endl;
  //controllo se l'operatore somma è ok
  Complex c3=c1.operator+(c2);
  c3.print();
  Complex c4=c2.operator+(c1);
  c4.print();
  //controllo se l'operatore differenza è ok
  Complex c5=c1.operator-(c2);
  c5.print();
  Complex c6(1,0);
  c6.print();
  cout<<c6.r()<<endl;
  cout<<c6.phi()<<endl;
  Complex c7(2,1);
  c7.print();
  cout<<c7.r()<<endl;
  cout<<c7.phi()<<endl;
 
  //controllo se l'operatore moltiplicazione è ok		      
  Complex c8=c1.operator*(c2);
  cout<<"la moltiplicazione tra c1 e c2 è:"<<endl;
  c8.print();
  cout<<c8.r()<<endl;
  cout<<c8.phi()<<endl;
 
  //controllo se le fasi tornano giuste in base al quadrante
  Complex c9(-2,1);
  c9.print();
  cout<<c9.r()<<endl;
  cout<<c9.phi()<<endl;
  Complex c10(-2,-1);
  c10.print();
  cout<<c10.r()<<endl;
  cout<<c10.phi()<<endl;
  Complex c11(2,-1);
  c11.print();
  cout<<c11.r()<<endl;
  cout<<c11.phi()<<endl;
  Complex c12(2,0);
  c12.print();
  cout<<c12.r()<<endl;
  cout<<c12.phi()<<endl;
 Complex c13(-2,0);
  c13.print();
  cout<<c13.r()<<endl;
  cout<<c13.phi()<<endl;
  Complex c14(0,1);
  c14.print();
  cout<<c14.r()<<endl;
  cout<<c14.phi()<<endl;
  Complex c15(0,-1);
  c15.print();
  cout<<c15.r()<<endl;
  cout<<c15.phi()<<endl;
  //controllo se l'operatore divisione è ok
  Complex c16=c1.operator/(c2);
  cout<<"la divisione tra c1 e c2 è"<<endl;
  c16.print();
  cout<<c16.r()<<endl;
  cout<<c16.phi()<<endl;
  
  return 0;
}
