#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    c=a*b;
    if(a==b)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
