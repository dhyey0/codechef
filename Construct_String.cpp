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
        int m;
        cin>>m;
        getchar();
        string a;
        getline(cin,a);
        for(int i=0;i<m-2;i++)
        {
            if(a[i]==a[i+1]&&a[i]==a[i+2])
            {
                a.erase(i,2);
                i-=1;
            }
        }
        cout<<"\n"<<a;

    }   
    return 0;
}

