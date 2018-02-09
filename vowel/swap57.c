#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("after swapping %d%d",a,b);
    return 0;
}
