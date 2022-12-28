#include<iostream>
#include<iomanip>
using namespace std ;
int main ()

{  string name;
     cin>>name ;
     double fs,ts ;
     cin>>fs>>ts;
     double mul = (ts*15)/100 ;
     double sum = fs+mul; 
     cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<sum<<endl;

     return 0;
}