#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int m,b,i,x,y,j;
    scanf("%d %d",&m,&b);
    struct tt
    {
        int t[b];
    }a[m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<b;j++)
        {
            a[i].t[j]=0;
        }
    }
    for(i=0;i<b;i++)
    {
        scanf("%d %d",&x,&y);
        for(j=0;j<m;j++)
        {
            if(j==x)
            {
                a[j].t[i]=y;
                break;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<m;j++)
        {
            
        }
    }
    

    return 0;
}

