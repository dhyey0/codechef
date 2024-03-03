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
        int m,i,l=0;
        cin>>m;
        for(i=0;i<m;i++)
        {

            if(i%2==0)
            cout<<"0 ";
            else
            cout<<"1 ";
        }
        cout<<"\n";
    }   
    return 0;
}

