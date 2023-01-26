#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
          int N;
          cin>>N;
       if(N== 0)
          {
             cout<<"NULL"<<endl;  
          }
          else if(N%2==0 && N>=0)
          {
               cout<<"EVEN POSITIVE"<<endl;
          }
          else if(N%2 == 0 && N<0)
          {
               cout<<"EVEN NEGATIVE"<<endl;
          }
          else if(N%2 == -1 && N<0)
          {
               cout<<"ODD NEGATIVE"<<endl;
          }
          else if(N%2 == 1 && N>=0)
          {
               cout<<"ODD POSITIVE"<<endl;
          }
         

     }
     return 0;
}