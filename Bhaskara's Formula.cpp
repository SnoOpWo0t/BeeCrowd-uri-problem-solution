#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     double A,B,C,bf,r,x1,x2;
     cin>>A>>B>>C ;      
    if(((B*B)-(4*A*C))<0 || (A==0) )
    {
     cout<<"Impossivel calcular"<<endl; ;
    }
    else 
    {
      r = sqrt((B*B) -(4*A*C));
   x1 = (-B + r) / (2*A);
   x2 = (-B - r) / (2*A);
     cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl;
     cout<<fixed<<setprecision(5)<<"R2 = "<<x2<<endl;
    }  
     return 0;
}