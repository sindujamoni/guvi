#include<stdio.h>
int main()
{
    int n,i,a,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    sum=sum+i;
    }
    printf("avg is %d",sum/n);
    return 0;
}
