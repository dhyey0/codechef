#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,k,i;
        cin>>m>>k;
        vector<int>v(m);
        for(i=0;i<m;i++)
        cin>>v[i];
        if(k<m)
        {
        sort(v.begin(),v.end());
        cout<<*(v.begin()+k)<<"\n";
        }
        else
        cout<<*max_element(v.begin(),v.end())<<"\n";
    }   
    return 0;
}

