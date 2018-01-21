#include<stdio.h>
int main()
{
int c,d;
printf("enter the 1st no.");
scanf("%d",&c);
printf("enter the second no.");
scanf("%d",&d);
c=c-d;
d=c+d;
c=d-c;
printf("before swapping%d",c);
printf("after swapping%d",d);
return 0;
}
