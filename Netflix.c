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
        int a,b,c,x;
        scanf("%d",&a);
        scanf("%d",&b); 
        scanf("%d",&c);  
        scanf("%d",&x); 
        if(a+b>=x)
        printf("\nYES");
        else if(b+c>=x)
        printf("\nYES");
        else if(a+c>=x)
        printf("\nYES");
        else
        printf("\nNO");
    }   
    return 0;
}

