#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>> T;
     for(i = 1 ; i<=T; i++)
     {
          int n,j,k = 0;
          cin>>n;
          if(n < 4 )
          {
               cout<<n<<" eh primo"<<endl;
          }
          else 
          {
               for( j =2 ; j<n ;j ++)
               {
                    if(n%j == 0)
                    {
                         k = 1;
                         break;
                    }
                    else k =2;
               }
               
          }
          if(k==1) cout<<n<<" nao eh primo"<<endl;
          else if (k==2) cout<<n<<" eh primo"<<endl;
     }
     return 0;
}