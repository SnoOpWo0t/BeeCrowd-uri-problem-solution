#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     double A;
     cin>>A;
     if(A>=0.00 && A<=100.0)
     {
          if(A>=0.0000 && A<=25) {cout<<"Intervalo [0,25]"<<endl;}
          else if(A>25.00 && A<=50) {cout<<"Intervalo (25,50]"<<endl;}
          else if(A>50.00 && A<=75) {cout<<"Intervalo (50,75]"<<endl;}
          else if(A>75.00 && A<=100) {cout<<"Intervalo (75,100]"<<endl;}
     }
     else
     {
          cout<<"Fora de intervalo"<<endl;
     }
     return 0;
}