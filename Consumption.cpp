#include<iostream>
#include<iomanip>
using namespace std ;
int main ()
{
     double X,Y;
     cin>>X>>Y;
     double div = X/Y;
     cout<<fixed<<setprecision(3)<<div<<" km/l"<<endl;
     return 0;
}