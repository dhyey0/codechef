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
        int m,i,j;
        cin>>m;
        int a[m],s=0,k=0;
        for(i=0;i<m;i++)
        {
         cin>>a[i];
         s+=a[i];
         if(s==i+1)
         k++;
        }
        cout<<k<<"\n"   ;
    }   
    return 0;
}

