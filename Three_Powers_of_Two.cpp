#include<iostream>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,a=0,i;
        cin>>m;
        getchar();
        string b;
        getline(cin,b);
        for(i=0;i<m;i++)
        {
            if(b[i]=='1')
            {
                a++;
            }
        }
        if(a>3)
        cout<<"NO\n";
        else if(a>1&&a<=3)
        cout<<"YES\n";
        else if(a==1)
        {
            if(b[m-1]=='1'||b[m-2]=='1')
            {
                cout<<"NO\n";
            }
            else
            cout<<"YES\n";
        }

    }   
    return 0;
}
