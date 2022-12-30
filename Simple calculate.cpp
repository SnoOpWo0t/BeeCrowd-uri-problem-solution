#include<iostream>
#include<iomanip>
using namespace std ;
int main ()
{
     double p1,u1,price1,p2,u2,price2;
     cin>>p1>>u1>>price1>>p2>>u2>>price2;
    double mul1 = u1*price1;
     double mul2 = u2*price2;
     double sum = mul1+mul2;
     cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<sum<<endl;
     return 0;
} 