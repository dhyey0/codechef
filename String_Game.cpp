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
        int m,j=0;
        cin>>m;
        getchar();
        string a;
        getline(cin,a);
        int i=0,i1=0,i2=0;
        for(i=0;i<m;i++)
        {
            if(a[i]=='1')
            i1++;
            if(a[i]=='0')
            i2++;
        }
            if(i1<=i2)   
            {
                j=i1;
            }
            else
            j=i2;
            if(j%2==0)
            cout<<"Ramos\n";
            else
            cout<<"Zlatan\n";
        

    }   
    return 0;
}

