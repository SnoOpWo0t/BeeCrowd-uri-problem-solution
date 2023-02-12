#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T,count1 = 0,x,count2 = 0;
     cin>>T;
     for(i=1 ; i<= T; i++)
     {
       cin>>x;
          if(x>= 10 && x<=20)
          {
               count1++;
          }
          else 
          {
               count2++;
          }

     }
     cout<<count1<<" in"<<endl;
     cout<<count2<<" out"<<endl;
     return 0;
}