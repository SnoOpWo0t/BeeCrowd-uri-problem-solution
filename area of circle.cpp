#include<iostream>
#include<conio.h>
using namespace std ;
#define FIXED_FLOAT(x) std::fixed<<std::setprecision(4)<<(x)
int main ()
{
     double A, p =3.14159 , R;
     cin>>R;
     A = p*(R*R);
     cout<<"A="<<A<<endl;
     getch ();
     return 0;
}