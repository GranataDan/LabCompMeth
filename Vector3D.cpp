//vector.cpp

#include <iostream>
#include "vector3D.h"

using namespace std;

int main (){
  double x,y,z;
  cout<<"inserire coordinate: "<< endl;
  cout<<"x = ";
  cin>>x;
  cout<<"y = ";
  cin>>y;
  cout<<"z = ";
  cin>>z;

  Vector3D v1(x, y, z);
  v1.print(1);

 cout<<"inserire coordinate 2 vettore: "<< endl;
  cout<<"x = ";
  cin>>x;
  cout<<"y = ";
  cin>>y;
  cout<<"z = ";
  cin>>z;

  Vector3D v2(x, y, z);

  v2.print(2);

  double prodotto = v1.scalar(v2);
  cout<<"prodotto scalare: "<< prodotto<<endl;

  Vector3D v3 = v1.prodotto(2.);
  cout<<"-------------------------------"<<endl;
  v3.print(3);

  cout<<"angolo fra i due: "<< v1.angle(v2)<< endl;

  return 0;
}
