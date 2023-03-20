#include<bits/stdc++.h>
using  namespace std ;
int preface(int a,int b)
{
    int e,q,f,r;
    if(a<0)
    {
        e=b;
        if(b<0) e=b*-1;
        for(r=0; r<e; r++)
        {
            f=a-r;
            if(f%b==0) break;
        }
        q=f/b;
        return q;
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    return q,r;

}
int main ()
{
    int a,b;
    cin>>a>>b;
    int x = preface(a,b);
    return 0;
}