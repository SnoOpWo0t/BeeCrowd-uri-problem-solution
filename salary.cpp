#include<iostream>
#include<iomanip>
using namespace std ;
int main ()
{
     double n,wh,ph;
     cin>>n>>wh>>ph;
     double mul = wh*ph;
     cout<<"NUMBER = "<<n<<endl;
     cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<mul<<endl;
     return 0;
}