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
        int x;
        scanf("%d",&x);
        if(x>=80&&x<=100)
        printf("\nYES");
        else
        printf("\nNO");    
    }   
    return 0;
}

