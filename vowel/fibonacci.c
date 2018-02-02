#include<stdio.h>
int main()
{
int i,n,nt,t1=0,t2=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
nt=t1+t2;
t1=t2;
t2=nt;
printf("%d",t1);
}
return 0;
}
