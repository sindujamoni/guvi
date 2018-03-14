#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,flag=0;
	printf("enter the string:");
	scanf("%s",a[i]);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
