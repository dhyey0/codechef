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
        long long int m;
        cin>>m;
        vector<long long int >v(3,0);
        v[0]=1;
        v[1]=1;
        v[2]=1;
        if((m-3)%2==0)
        {
            v[1]+=(m-3)/2;
            v[2]=v[1];
        }
        else
        {
            v[0]+=(m-3);
        }
        for(i=0;i<=2;i++)
        cout<<v[i]<<" ";
        cout<<"\n";

    }   
    return 0;
}

