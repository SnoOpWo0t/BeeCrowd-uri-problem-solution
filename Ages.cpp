#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     double x,n=0,j=0,avg;
     while(1)
     {
          cin>>x;
          if(x<0) break;
          n +=x;
          j++;          
     }
     avg = n/j;
     cout<<fixed<<setprecision(2)<<avg<<endl;
     return 0;
}