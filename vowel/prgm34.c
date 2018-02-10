#include<stdio.h>
int main()
{
char a[60]="hello world.good bye";
int i,count=1;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
count=count+1;
}
}
printf("line is %d",count);
return 0;
}
