#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcase;
    cin>>testcase;
    while(testcase--)
    {
        //CODE STARTS
    
        int a,s;
        cin>>a>>s;
        if(a%2!=0)
        {
            if(a+4<=s)
            {
                cout<<a+1<<" "<<a+2<<" "<<a+3<<" "<<a+4<<"\n";
            }
            else
            cout<<"-1\n";
        }
        else
        {
            if(a+3<=s)
            {
                cout<<a<<" "<<a+1<<" "<<a+2<<" "<<a+3<<" ";
            }
            else
            cout<<"-1\n";

        }
    }
    return 0;
}

