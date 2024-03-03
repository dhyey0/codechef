#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int m,j,i;
        cin>>m;
        vector<int>v(m);
        vector<int>g(m);
        stack<int>st;
        for(i=0;i<m;i++)
            cin>>v[i];

        for(i=0;i<m;i++)
        {
            if(st.empty()!=1 && v[i]>v[st.top()])
            {
                g[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!(st.empty()))   
        {
            g[st.top()]=-1;
            st.pop();
        }
        for(i=0;i<m;i++)
        {
            cout<<v[i]<<" "<< (g[i]==-1 ? -1 : v[g[i]])<<" ";
        }
    }

    return 0;
}
