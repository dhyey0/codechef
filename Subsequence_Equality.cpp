#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        //code starts here
        int i,j,c=0;
        map <char,int>m;
        string a;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            if(m.find(a[i])==m.end())
            {
                m.insert(make_pair(a[i],1));
            }
            else
            {
                m[a[i]]++;
            }  
        }
        for(auto it=m.begin();it != m.end();it++)
        {
            if(it->second>=2)
            {
                cout<<"yes\n"
                c++;
                break;
            }
        }
        if(c==0) 
        cout<<"no\n";
    }   
    return 0;
}

