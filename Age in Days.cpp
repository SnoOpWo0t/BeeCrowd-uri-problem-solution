#include<bits/stdc++.h>
using namespace std ;
int main ()
{    int n,y,m,d,temp ;
cin>>n;
     y = n/365;
     temp = n%365;
     m = temp / 30;
     d = temp%30;
     cout<<y<<" ano(s)"<<endl;
      cout<<m<<" mes(es)"<<endl;
       cout<<d<<" dia(s)"<<endl;

     return 0;
}