#include<stdio.h>
int main()
{
char a[60]="laptop is good";
int i,count=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
}
}
printf("space is %d",count);
return 0;
}
