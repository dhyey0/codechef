#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        int i,j;
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if((a1-a2+b1-b2)<0)
        cout<<"YES\n";
        else
         cout<<"NO\n";


    }   
    return 0;
}

