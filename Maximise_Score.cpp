#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int i=0;
        int m,t1,t2,i1=0,i2=1,v1,v2;
        cin>>m;
        int a[m];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int min=a[0]-a[1];
        if(min<0)
      min*=-1;
        for(i=1;i<m-1;i++)
        {
            t1=a[i]-a[i-1];
            t2=a[i]-a[i+1];
            if(t1<0)
            t1*=-1;
            if(t2<0)
            t2*=-1;
            if(t1<min)
            {
            min=t1;
            i1=i-1;
            i2=i;
            }
             if(t2<min)
            {
            min=t2;
            i1=i;
            i2=i+1;
            }
        }  
        int q=a[m-1]-a[m-2];
        if(q<0)
        q*=-1;
        if(q<=min)
        {
            cout<<q<<"\n";
            continue;
        }
        if(i1==0)
        {
            int l=a[0]-a[1];
            if(l<0)
            {
                l*=-1;
            }
            cout<<l<<"\n";
            continue;
        }
        if(i2==m-1)
        {
            int m=a[m-1]-a[m-2] ;
            if(m<0)
            m*=-1;

            cout<<m<<"\n";
            continue;
        }
        int z,x,c;
        z=a[i1-1]-a[i1];
        if(z<0)
        z*=-1;
        x=a[i2+1]-a[i2];
        if(x<0)
        x*=-1;
        if(x>z&&x>min)
        {
            cout <<x<<"\n";
        }
        else if(z>x&&z>min)
        {
            cout<<z<<"\n";
        }
        else
        cout<<min<<"\n";
    }   
    return 0;
}

