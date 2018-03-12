#include <stdio.h>
int main()
{
char a[50];
int i,flag=0;
printf("\n enter the given string:");
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
return 0;
}
