#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int T,n,x=0;
    cin>>T;
    for(int i = 0 ; i<5;i++)
    {
    cin>>n;
    if(T==n) x++;
    }
    cout<<x<<endl;
    return 0;
}