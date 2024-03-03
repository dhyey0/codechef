#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int a,s,d;
        cin>>a>>s>>d;
        if(a+s+d>=6)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }   
    return 0;
}

