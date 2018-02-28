#include<stdio.h>
int main()
{
int n,m,p;
printf("enter the numbers");
scanf("%d",&n,&m);
p=n+m;
if(p%2==0)
{
    printf("even");
}
else
{
    printf("odd");
}
return 0;
}
