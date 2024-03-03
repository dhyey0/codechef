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
        int m,i,k=0;
        cin>>m;
        int a[m];
        for(i=0;i<m;i++)    
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            if(a[i]==0)
            k++;

        }
        if(k%2==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }   
    return 0;
}

