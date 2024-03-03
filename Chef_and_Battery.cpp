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
        int m;
        cin>>m;
        if(m==50)
        cout<<0<<"\n";
        else if(m<50&&m%2==0)
        cout<<(50-m)/2<<"\n";
        else if(m<50&&m%2!=0)
        {
            m-=3;
            cout<<((50-m)/2)+1<<"\n";
        }
        else if(m>50)
        {
        int k=0;
        while(m>50)
        {
            m-=3;
            k++;
        }
        if(m==50)
        cout<<0+k<<"\n";
        else if(m<50&&m%2==0)
        cout<<k+((50-m)/2)<<"\n";
        else if(m<50&&m%2!=0)
        {
            m-=3;
            cout<<((50-m)/2)+1+k<<"\n";
        }
        }


    }   
    return 0;
}

