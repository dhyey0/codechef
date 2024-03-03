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
        int m;
        cin>>m;
        int k=m%10;
        if (k<=4)
        cout<<100-(m/10)*10<<"\n";
        else
        cout<<100-((m/10)*10+10)<<"\n";

    }   
    return 0;
}

