#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        long double x,a;
        int z=1;
        cin>>x;
        a=(x/(double)5);
        while(a<100)
        {
        a+=(0.2*x);
        z++;
        }
        cout<<z<<"\n";
    }   
    return 0;
}





