#include<bits/stdc++.h>
using namespace std;
int fac(int a);
int fac(int a)
{
    if(a==0)
    return 1;
    else
    return(a*fac(a-1));
}
int main()
{
        unsigned long long int m,i;
        cin>>m;
        float q=1;
        int a[m],y;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            cin>>y;
        }
        map<int,int>fr;
        for(i=0;i<m;i++)
        {
            fr[a[i]]++;
        }
         for (auto it = fr.begin(); it != fr.end(); it++) 
        {
            q*=fac(it->second);
        }
        q/=(m*0.1);
        int k=pow(q,-1);
        cout<<k%1000000007<<"\n";
    return 0;
}

