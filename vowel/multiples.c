#include<stdio.h>
int main()
{
int n,i,l;
printf("enter the number");
scanf("%d",&n);
printf("enter the limit");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
if(i%n==0)
{
printf("%d",i);
}
}
return 0;
}
