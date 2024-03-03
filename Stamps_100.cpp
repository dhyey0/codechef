#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        unsigned long long int i,j,m;
        cin>>m>>ws;
        string s;
        cin>>s>>ws;
        for(i=0;i<=m-3;i++)
        {
            if((  (  (s[i]=='1') &&  (s[i+1]=='1' )  &&  ( s[i+2]=='1' )) )  || ( (s[i]=='1')  && ( s[i+1]=='1') &&  (s[i+2]=='0'  ))||   ( (s[i]=='1')  && ( s[i+1]=='0') &&  (s[i+2]=='1'  )))
            {
                s[i]='1';
                s[i+1]='0';
                s[i+2] ='0';
            }
            else
            continue;
        }
        cout<<s<<"\n";
    }   
    return 0;
}

