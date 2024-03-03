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
        int a,s;
        cin>>a>>s;
        if(s*36>=a)
        cout<<"YES\n";
        else 
        cout<<"NO\n";

    }   
    return 0;
}

