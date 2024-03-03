#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcase;
    cin>>testcase;
    while(testcase--)
    {
        //CODE STARTS
        int i,j=0;
        for(i=1;i<4;i++)
        {
            int a;
            cin>>a;
            if(a==0)
            j++;
        }
        if(j>=2)
        cout<<"Water filling time\n";
        else
        cout<<"Not now \n";




    }
    return 0;
}

