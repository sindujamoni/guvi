#include<stdio.h>
int main()
{
int a,i,l;
printf("enter the number");
scanf("%d",&a);
printf("enter the limit");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
if(i%a==0)
{
printf("%d",i);
}
}
return 0;
}
