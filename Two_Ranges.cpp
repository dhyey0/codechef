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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int m=b-a+1;
        for(int i=c;i<=d;i++)
        {
            if(i<a || i>b)
            {
                m++;
            }
        }
        cout<<m<<"\n";

    }   
    return 0;
}

