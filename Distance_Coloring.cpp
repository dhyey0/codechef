#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int testcase;
    cin>>testcase;
    while(testcase--)
    {
        //CODE STARTS
        int i,j;
        unsigned long long int a=1;
        int m,k; 
        cin>>m>>k;
        if(m<=k)
        {
            for(i=0;i<m;i++)
            {
                
                a*=(k-i);
            }
        }
        else if(m>k)
        {
            for(i=0;i<k;i++)
            {
                a*=(k-i);
            }
        }
        cout<<a%1000000007<<"\n";

    }
    return 0;
}

