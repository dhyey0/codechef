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
        int m,i,z=0,o=0;
        cin>>m;
        getchar();
        string a;
        getline(cin,a);
        for(i=0;i<m;i++)
        {
            if(a[i]=='1')
            o++;
            else if(a[i]=='0')
            z++;
        }
        if(o<z+1)
        cout<<o<<'\n';
        else 
        cout<<z+1<<'\n';

    }   
    return 0;
}

