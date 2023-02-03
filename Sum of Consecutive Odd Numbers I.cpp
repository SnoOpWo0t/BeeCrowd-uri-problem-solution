#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int n,z,i,x,y,sum=0;
     cin>>x>>y;
     if(x>y)
     { z=y;  y=x; x=z;   }
    else if(x%2==0) {x++; n=x;};
     else if(x%2==1) n= x+2;
     for(i=n;i<=y;i+=2)
     {     
       sum+=i;               
     }
     cout<<sum<<endl;
     return 0;
}