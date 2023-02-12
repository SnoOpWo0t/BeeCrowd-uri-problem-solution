#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     double n,re,per,ts;
     cin>>n;
     if(n>0 && n<=400.00)
     {
          ts = (n+(n*.15)) ;
          re = n*.15 ;
          cout<<fixed;
          cout<<setprecision(2)<<"Novo salario: "<<ts<<endl;
          cout<<setprecision(2)<<"Reajuste ganho: "<<re<<endl;
          cout<<"Em percentual: 15 %"<<endl;
     }
     else  if(n>=400.01&& n<=800.00)
     {
          ts = (n+(n*.12)) ;
          re = n*.12 ;
          cout<<fixed;
          cout<<setprecision(2)<<"Novo salario: "<<ts<<endl;
          cout<<setprecision(2)<<"Reajuste ganho: "<<re<<endl;
          cout<<"Em percentual: 12 %"<<endl;
     }
          else  if(n>=800.01&& n<=1200.00)
     {
          ts = (n+(n*.10)) ;
          re = n*.10 ;
          cout<<fixed;
          cout<<setprecision(2)<<"Novo salario: "<<ts<<endl;
          cout<<setprecision(2)<<"Reajuste ganho: "<<re<<endl;
          cout<<"Em percentual: 10 %"<<endl;
     }
          else  if(n>=1200.01&& n<=2000.00)
     {
          ts = (n+(n*.07)) ;
          re = n*.07 ;
          cout<<fixed;
          cout<<setprecision(2)<<"Novo salario: "<<ts<<endl;
          cout<<setprecision(2)<<"Reajuste ganho: "<<re<<endl;
          cout<<"Em percentual: 7 %"<<endl;
     }
     else if (n>2000.00)
     {
          ts = (n+(n*.04)) ;
          re = n*.04 ;
          cout<<fixed;
          cout<<setprecision(2)<<"Novo salario: "<<ts<<endl;
          cout<<setprecision(2)<<"Reajuste ganho: "<<re<<endl;
          cout<<"Em percentual: 4 %"<<endl;
     }

     return 0;
}