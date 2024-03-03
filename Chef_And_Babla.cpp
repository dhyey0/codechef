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
        int m,i,c,l;
        cin>>m;
        int a[m];
        for(i=0;i<m;i++)
        cin>>a[i];
        if(a[0]>=0)
        c=a[0];
        else
        c=-a[0];
        for(i=0;i<m;i++)
        {
            if(a[i]>=0&&a[i]<c)
            c=a[i];
            else if(a[i]<0&&(-a[i])<c)
            c=-a[i];
        }
        if(c==0)
        cout<<"-1\n";
        else
        cout<<c-1<<"\n";
        

    }   
    return 0;
}

