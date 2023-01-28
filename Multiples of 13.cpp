#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int s=0,n,x,y;
     cin>>x>>y;
       if(x > y)
       {
        n = y;
        y = x;
        x = n;
    }
     for(int i = x; i<=y; i++)
     {
          if(i%13 != 0) s+=i;
          
     }
     cout<<s<<endl;
     return 0;
}