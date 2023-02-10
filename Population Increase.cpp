#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i =1 ; i<=T; i++)
     {
          double PA,PB,G1,G2,y =0;
          cin>>PA>>PB>>G1>>G2;
          while(PA<=PB)
          {
               PA = PA + ((PA * G1)/100);
               PB = PB + ((PB * G2)/100);
               y++;
               if (y>100)
               {
                    cout<<"Mais de 1 seculo"<<endl;
                    break;
               }
               if(y<= 100)
               cout<<y<<" anos."<<endl;
          }
     }
   return 0;
}