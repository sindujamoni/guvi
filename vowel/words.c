#include<stdio.h>
int main()
{
	char a[100];
	int b=0,e=1,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='3 ')
		b=++e;
	}
	printf("%d",b);
  return 0;
}
