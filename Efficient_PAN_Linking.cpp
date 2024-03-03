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
    getchar();
    while(tc--)
    {
        //code starts here
        string a;
        cin>>a;
        int k=0;
        int i=0,j=0;
        while(a[i]!='\0')   
        {
            i++;
        }
        i--;
        if(i==0)
        {
            k=a[0]-48;
            cout<<k<<"\n";
            continue;
        }
        else
        {int c=a[i]-48;
        j=i-1;
        int d=a[j]-48;
        k=d*10+c;
        cout<<k%20<<"\n";
        }


    }   
    return 0;
}

