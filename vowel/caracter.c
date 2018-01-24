#include<stdio.h>
int main()
{
char a[10];
int i,c=0;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if((a[i]>='a')&&(a[i]<='z'))
{
c+=1;
}
i++;
}
printf("%d",c);
return 0;
}
