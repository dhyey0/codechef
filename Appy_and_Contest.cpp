#include<bits/stdc++.h> 
using namespace std;
int gcd(int,int);
int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    return
    gcd(b,a%b);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int i,m,a,b,k,x=0;
        cin>>m>>a>>b>>k;
        x=(m/a)+(m/b)-(2*(m/((a*b)/(gcd(a,b)))));
        if(x>=k)
        cout<<"Win\n";
        else
        cout<<"NO\n";
    }   
    return 0;
}

