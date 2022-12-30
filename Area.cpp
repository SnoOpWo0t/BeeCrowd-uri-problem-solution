#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
int main ()
{
    double A,B,C,pi = 3.14159,tria,cir,trapi,sq,rect;
     cin>>A>>B>>C;
     tria = 0.5*A*C;
     cir = pi*C*C;
     trapi =  ((A+B)/2)*C;
     sq = B*B;
    rect = A*B;
cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<tria<<endl;
cout<<fixed<<setprecision(3)<<"CIRCULO: "<<cir<<endl;
cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapi<<endl;
cout<<fixed<<setprecision(3)<<"QUADRADO: "<<sq<<endl;
cout<<fixed<<setprecision(3)<<"RETANGULO:  "<<rect<<endl;
return 0;
}