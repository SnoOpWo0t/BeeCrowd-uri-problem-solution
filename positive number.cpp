#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,num =0;
     double a ;
     for(i=1; i<=6;i++)
     {
          cin>>a;
          if(a>=0) 
          num++;
     }
     cout<<num<<" valores positivos"<<endl;
     return 0;
}
