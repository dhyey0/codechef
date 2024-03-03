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
        int x,y,z;
        cin>>x>>y>>z;
        if(x<y&&x<z)
        cout<<"ALICE\n";
        else if(z<y&&z<y)
        cout<<"CHARLIE\n";
        else 
        cout<<"BOB\n";
    }   
    return 0;
}

