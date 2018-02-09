#include<stdio.h>
int main()
{
    int n,i,rem,result=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        rem=n%10;
        result=result+rem;
        n=n/10;
    }
    printf("%d",result);
    return 0;
    }
