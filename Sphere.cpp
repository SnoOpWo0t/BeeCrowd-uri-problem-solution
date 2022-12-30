#include<iostream>
#include<bits/stdc++.h>

using namespace std ;
int main ()
{
    double R, pi = 3.14159;
     cin>>R;
     double formula = (4.0/3) * pi * (R*R*R) ;
     cout<<fixed<<setprecision(3)<<"VOLUME = "<<formula<<endl;
     return 0;
}
