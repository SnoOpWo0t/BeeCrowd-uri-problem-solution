#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int n,i,sq;
     cin>>n;
     for(i=1;i<=n;i++)
     {
          if(i%2==0)
          {
               sq =i*i;
               cout<<i<<"^"<<"2 "<<"= "<<sq<<endl;
          }
     }
    
     return 0;
}