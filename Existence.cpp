#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        long long int x,y;
        cin>>x>>y;
        if(x*x==2*y)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }   
    return 0;
}

