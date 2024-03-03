#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int i;
        int m,k;
        cin>>m>>k;
        if((m+1)==k && k>0)
        {
            for(i=0;i<(m);i++)
            {
                cout<<'+';
            }
            cout<<"\n";
        }
        else if(k<(m+1)&& k>0)
        {
            for(i=0;i<(m);i++)
            {
                if(i<(k-1))
                    cout<<'+';
                if(i>=(k-1))
                    cout<<'*';
            }
            cout<<"\n";
        } 
        else if((m)==(-k) && k<0)
        {
            for(i=0;i<(m);i++)
            {
                cout<<'-';
            }
            cout<<"\n";
        }
        else if((k<0)&&(-k)<(m))
        {
            for(i=0;i<(m);i++)
        {
            if(i<(-k))
                cout<<'-';
            if(i>=(-k))
                cout<<'*';
        }
        cout<<"\n";
        } 
        else if(((m+1)<k&&k>0)||(k<0&&(m)<(-k)))
        {
            cout<<-1<<"\n";
        }
        else if(k==0)
        {
            if(m%2==0)
            {
                for(i=1;i<=m;i++)
                {
                    if(i<=m/2)
                        cout<<'+';
                    else 
                        cout<<'-';
                }
            }
            else
            {
                for(i=0;i<=m;i++)
                {
                    if(i<m/2)
                        cout<<'+';
                    else if(i<(m/2)*2)
                        cout<<'-';
                    else 
                        cout<<'*';
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}

