#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcase;
    cin>>testcase;
    while(testcase--)
    {
        //CODE STARTS
    
        int i,j;
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
            int test=x;
            x=y;
            y=test;
        }
        if(y%2==0)
        cout<<"YES\n";
        else if(y%2!=0&& x%2==0)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
    return 0;
}

