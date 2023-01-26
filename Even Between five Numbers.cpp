#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int n[5],i,even = 0;
     for(i=0;i<5;i++)
     {
     cin>>n[i];
     if(n[i] %2==0)
     {        even++;             }
     }
      cout<<even<<" valores pares"<<endl;
     return 0;
}