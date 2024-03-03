#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,i,a;
        cin>>m;
        vector<int>v(m);
        for(i=0;i<m;i++)    
        cin>>v[i];
        sort(v.begin(),v.end());
        for(i=m-1;v[i]==v[m-1];i--);
        cout<<v[i]+v[m-1]<<"\n";
    }   
    return 0;
}

