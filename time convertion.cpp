#include<bits/stdc++.h>
using namespace std ;
int main () {
int n,h,s,m,temp;
cin>>n;
h = n/3600;
temp = n%3600;
m= temp/60;
s =n%60;
cout<<h<<":"<<m<<":"<<s ;

return 0; }