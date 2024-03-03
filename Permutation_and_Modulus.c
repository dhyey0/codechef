#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    long long int tc;
    scanf("%lld",&tc);
    while(tc--)
    {
        //code starts here
        int m,i=0;
        scanf("%d",&m);
        int a[m];
        
        while(i<m-1)
        {
          a[i]=(i+2);  
          i++;  
        }
        a[m-1]=1;
        for(i=0;i<=m-1;i++)
        {
            printf("%d ",a[i]);
        }printf("\n");
    }   
    return 0;
}

