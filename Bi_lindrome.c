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
        int m,i,j,k=0;
        scanf("%d",&m);
        getchar();
        char S[m+1];
        gets(S);
        for(i=0;S[i]!='\0';i++)
        {
            for(j=i+1;S[j]!='\0';j++)
            {
                if(S[j]==S[i])
                {
                    printf("\n%d",m-2);
                    k++;
                    break;
                }

            }
            if(k!=0)
            break;
        }
        if(k==0)
        printf("\n%d",-1);
    }   
    return 0;
}

