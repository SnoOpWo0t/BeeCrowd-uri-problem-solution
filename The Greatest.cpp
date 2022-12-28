#include<iostream>
using namespace std ;
int main ()
{
     int a,b,c,MaiorAB;
     cin>>a>>b>>c;
     MaiorAB = (a+b+abs (a-b))/2;
     int M = (MaiorAB+c+abs (MaiorAB-c))/2;
     cout<<M<<" eh o maior"<<endl;

     return 0;
}