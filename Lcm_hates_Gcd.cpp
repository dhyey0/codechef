#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int a,b,i,q=0,g;
        cin>>a>>b;
      /* for(i=2;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
            {
                q++;
                g=i;
                
            }
        }
        if(q==0)
        g=1;*/
        cout<<a-__gcd(a,b)<<"\n";
    }   
    return 0;
}

