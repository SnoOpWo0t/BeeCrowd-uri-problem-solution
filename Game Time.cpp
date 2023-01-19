#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int s,e;
     cin>>s>>e;
     if(s==e) 
     {cout<<"O JOGO DUROU 24 HORA(S)"<<endl;}
     else if(e>s)
     {
          int t1 =(e-s);
          cout<<"O JOGO DUROU "<<t1<<" HORA(S)"<<endl;
     }
     else if(s>e)
     {
          int t2 = (e+24)-s;
          cout<<"O JOGO DUROU "<<t2<<" HORA(S)"<<endl;}

     return 0;
}