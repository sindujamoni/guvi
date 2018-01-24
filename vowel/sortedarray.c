#include<stdio.h>
int main()
{
int r,a,i,j;
scanf("%d",&r);
int b[r];
printf("\n the input of an array is");
for(i=0;i<r;i++)
{
scanf("%d",&b[i]);
}
printf("\n the output of an array is");
for(j=0;j<r;j++)
{
printf("%d",b[j]);
}
return 0;
}
