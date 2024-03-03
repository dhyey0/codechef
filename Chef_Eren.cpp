#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,a,b,z=0;
        cin>>m>>a>>b;
        int k=2,l=1;
        while(k<=m)
        {
            z+=a;
            k+=2;

        }
         while(l<=m)
        {
            z+=b;
            l+=2;
        }
        cout<<z<<"\n";



    }   
    return 0;
}

