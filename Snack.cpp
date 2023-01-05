#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     double X,Y,m1,m2;
     cin>>X>>Y;
     cout<<fixed;
     if(X==1){cout<<setprecision(2)<<"Total: R$ "<<4.00*Y<<endl;}
     else if(X==2){cout<<setprecision(2)<<"Total: R$ "<<4.50*Y<<endl;}
     else if(X==3){cout<<setprecision(2)<<"Total: R$ "<<5.00*Y<<endl;}
     else if(X==4){cout<<setprecision(2)<<"Total: R$ "<<2.00*Y<<endl;}
     else if(X==5){cout<<setprecision(2)<<"Total: R$ "<<1.50*Y<<endl;}
     return 0;
}