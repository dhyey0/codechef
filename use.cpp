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
        int m,i;
        cin>>m;
        if(m%2==0)
        {
        for(i=-(m/2);i<m/2;i++)
        {
        cout<<i<<" ";
        }
        cout<<'\n';
        }
        else
        {
        for(i=-(m/2);i<=m/2;i++)
        {
        cout<<i<<" ";
        }
        cout<<'\n';
        }
    }   
    return 0;
}

