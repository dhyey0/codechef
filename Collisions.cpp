#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int i,j,a,b,z=0,x=0;
        cin>>a>>b>>ws;
        vector<int> u(b,0); // changed to a vector of size b
        vector<char> v(a*b); // fixed the size of the vector
        for(int i=0;i<a;i++) // corrected loop bounds
        {
            for(j=0;j<b;j++)
            {
                char q;
                cin>>q; // changed to cin instead of getchar
                v[i*b+j]=q; // fixed the index calculation
                if(q=='1') u[j]++; // increment u[j] for each girl j that is liked by the boy i
            }
        }
        for(i=0;i<b;i++) // calculate the number of collisions
        {
            x=(u[i]*(u[i]-1))/2;
            z+=x;
        }
        cout<<z<<"\n";
    }   
    return 0;
}
