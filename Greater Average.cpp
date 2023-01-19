#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     double A,B,C,avg;
     cin>>A>>B>>C;
     avg = (A+B)/2;
     if(avg>C)
     {
          cout<<"yes"<<endl;
     }
     else {cout<<"No"<<endl;}
     }
     return 0;
}
