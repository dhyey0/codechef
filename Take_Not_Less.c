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
        int m,i,max,f=0;
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]); 
        }
        max=a[0];
        for(i=0;i<m;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
            } 
            else
            continue;
        }
        for(i=0;i<m;i++)
        {
            if(a[i]==max)
            {
               f+=1; 
            } 
            else
            continue;
        }
        if(f%2==1)
        printf("Marichka\n");
        else if(f%2==0)
        printf("Zenyk\n");
    }   
    return 0;
}

