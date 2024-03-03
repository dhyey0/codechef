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
        int a,k=0,l=2;
        cin>>a;
        if(a==1||a==2)
        cout<<0<<"\n";
        else if(a%2==0)
        {
            while(a!=2)
            {
                a-=2;
                k+=3;

            }
            
            cout<<k<<"\n";
        }
        else if(a%2!=0)
        {
            while(a!=1)
            {
                a-=2;
                l+=3;
            }
            
            cout<<l<<"\n";
        }

    }   
    return 0;
}

