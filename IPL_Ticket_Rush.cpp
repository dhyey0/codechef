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
        int a,b;
        cin>>a>>b;
        if(a>=b)
        cout<<a-b<<"\n";
        else
        cout<<0<<"\n";

    }   
    return 0;
}

