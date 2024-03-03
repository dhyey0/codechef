#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        int i,j;
        int a[3];
        int b[3];
        for(int i=0;i<3;i++)
        cin>>a[i];
        for(int i=0;i<3;i++)
        cin>>b[i];
        sort(a,a+3);
        sort(b,b+3);
        if(b[2]+b[1]>a[1]+a[2])
        cout<<"Bob\n";
        if(b[2]+b[1]<a[1]+a[2])
        cout<<"Alice\n";
        else if(b[2]+b[1]==a[1]+a[2])
        cout<<"Tie\n";
        

    }   
    return 0;
}

