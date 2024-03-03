#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        //CODE STARTS
    
        int i,j=0;
        vector<int>v;
        int m,k,l,a=0;
        cin>>m>>k>>l;
        pair<int,int>p[m];
        for(i=0;i<m;i++)
        {
            cin>>p[i].first>>p[i].second;
            if(p[i].second==l)
            {
                a++;
                v.push_back(p[i].first);
            }
        }
        if(k>m)
        cout<<"-1\n";
        else if(a<k)
        {
            cout<<"-1\n";
        }
        else
        {
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            for(i=0;i<k;i++)
            {
                j+=v[i];
            }
            cout<<j<<"\n";
        }
        

    }
    return 0;
}

