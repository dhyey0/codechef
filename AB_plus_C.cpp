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
        unsigned long long int a;
        cin>>a;
        if(a==1)
        cout<<-1<<"\n";
        else if(a<1000000)
        {
        if(a%2!=0)
        cout<<2<<" "<<a/2<<" "<<1<<"\n";
        else
        cout<<1<<" "<<a/2<<" "<<a/2<<"\n";
        }
        else if(a==1000000)
        {
        cout<<1<<" "<<999999<<" "<<1<<"\n";
        }
        else if(a==10000000)
        cout<<999999<<10<<10<<"\n";
        else if(a==100000000)
        cout<<999999<<100<<100<<"\n";
        else if(a==1000000000)
        cout<<9999999<<1000<<1000<<"\n";
        else if(a==10000000000)
        cout<<9999999<<10000<<10000<<"\n";
        else if(a==100000000000)
        cout<<9999999<<100000<<100000<<"\n";
        else if(a==1000000000000)
        cout<<9999999<<1000000<<1000000<<"\n";
        else
        {
            cout<<1000000<<" "<<(a/1000000)<<" "<<a-(1000000*(a/1000000))<<"\n";
        }
    }
    return 0;
}
