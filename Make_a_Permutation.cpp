
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int i,a=0;
        int m;
        cin>>m;
        vector<int>v(m);
        for(i=0;i<m;i++)
        cin>>v[i];
        sort(v.begin(),v.begin()+m);
        for(i=0;i<m-1;i++)
        {
            if(v[i]>m)
            a++;
            else if(v[i]==v[i+1])
            a++;
        }
        if(v[m-1]>m)
        a++;
        cout<<a<<"\n";
    }   
    return 0;
}

