#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        unsigned long long int i,j,m;
        cin>>m;
        vector<unsigned long long int>v;
        map<unsigned long long int>mm;
        int r=0;
        for(i=0;i<m;i++)
        {
            cin>>v[i];
            mm[v[i]]++;

        }
        for(auto a : mm)
        {
            if(mm[a]>m/2);
            cout<<-1<<endl;

        }
        if(r)
        {
            continue;
        }
        sort(v.begin(),v.end());
        if(m%2==0)
        {
            int j=m-1;
            for(i=0;i<m/2;i++)
            {
                if(i%2==1)
                {
                    swap(v[i],v[j]);

                }
                j--;
            }
        }
        else if(m %2 ==1)
        {
             int j=m-1;
            for(i=0;i<=m/2;i++)
            {
                if(i%2==1)
                {
                    swap(v[i],v[j]);

                }
                j--;
            }
        }
        for(i=0;i<m;i++)
        cout<<v[i]<<" "<<"\n";
    }   
    return 0;
}

