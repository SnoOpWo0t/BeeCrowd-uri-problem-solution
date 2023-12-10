#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t;i++)
    {
    int a,b;
    cin>>a>>b;
    if(b==0)
    {
        cout<<"divisao impossivel"<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<(double)a/b<<endl;
    }
    }
    
}