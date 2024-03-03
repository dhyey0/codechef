#include<bits/stdc++.h> 
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int i,m;
        cin>>m;
        vector<int>v(m);
        for(i=0;i<m;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[0]+v[1]<<"\n";
    }   
    return 0;
}

