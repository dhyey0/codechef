#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,i,s=0;
        cin>>m;
        vector<int>v(m);
        vector<int>v1(m-1);
        for(i=0;i<m;i++)
        {
            cin>>v[i];
            if(m!=0)
            {
                for(int j=0;j<i;j++)
                {
                    v1[s]=v[i]-v[j];
                    s++;
                }
            }
        }
        for()
    }   
    return 0;
}

