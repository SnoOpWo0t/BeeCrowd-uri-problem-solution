#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     long long int n,hun,fifty,twen,ten,f,t,on,temp;
     cin>>n;
     hun = n/100;
     temp = n%100;
     fifty = temp/50;
     temp = temp%50;
     twen = temp/20;
     temp = temp%20;
     ten = temp/10;
     temp = temp%10;
     f = temp/5;
     temp = temp%5;
     t = temp/2;
     temp= temp%2;
     on =  temp;
     cout<<n<<endl;
     cout<<hun<<" nota(s) de R$ 100,00"<<endl;
     cout<<fifty<<" nota(s) de R$ 50,00"<<endl;
     cout<<twen<<" nota(s) de R$ 20,00"<<endl;
     cout<<ten<<" nota(s) de R$ 10,00"<<endl;
     cout<<f<<" nota(s) de R$ 5,00"<<endl;
     cout<<t<<" nota(s) de R$ 2,00"<<endl;
     cout<<on<<" nota(s) de R$ 1,00"<<endl;
     
     return 0;
}