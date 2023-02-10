#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int sh,sm,eh,em,Th,Tm;
     cin>>sh>>sm>>eh>>em;
     if(sm>em)
     {
          em +=60;
          Tm = em-sm;
          if(sh==em)
          {
               cout<<"O JOGO DUROU 24 HORA(S) E "<<Tm<<" MINUTO(S)"<<endl;
          }
          else if(sh<eh)
          {
               Th = (eh -sh)-1 ;
               cout<<"O JOGO DUROU "<<Th<<" HORA(S) E "<<Tm<<" MINUTO(S)"<<endl;
          }
          else if(sh>eh)
          eh+=24;
          Th =( eh - sh)-1;
           cout<<"O JOGO DUROU "<<Th<<" HORA(S) E "<<Tm<<" MINUTO(S)"<<endl;
     }
     else 
     {
          if(sm<em)
          Tm = em-sm;
          else Tm = 0;
          if(sh==em)
          {
               cout<<"O JOGO DUROU 24 HORA(S) E "<<Tm<<" MINUTO(S)"<<endl;
          }
          else if(sh<eh)
          {
               Th = (eh -sh) ;
               cout<<"O JOGO DUROU "<<Th<<" HORA(S) E "<<Tm<<" MINUTO(S)"<<endl;
          }
          else if(sh>eh)
          eh+=24;
          Th =( eh - sh);
           cout<<"O JOGO DUROU "<<Th<<" HORA(S) E "<<Tm<<" MINUTO(S)"<<endl;
          

     }

     return 0;
}