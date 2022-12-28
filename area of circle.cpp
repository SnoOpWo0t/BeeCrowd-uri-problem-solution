#include<iostream>
#include<iomanip>
using namespace std ;

int main ()
{
     double A, p =3.14159 , R;
     cin>>R;
     A = p*(R*R);
     cout<<"A="<<fixed<<setprecision(4)<<A<<endl;

     return 0;
}