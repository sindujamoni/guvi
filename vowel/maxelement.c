#include <stdio.h>

int main(void)
{
	int s,a,b,c;
	scanf("%d\s",&s);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d",a);
	}
	else if(b>a&&b>c)
	   {
		printf("%d",b);
	   }
           
           	else
	{
		printf("%d",c);
	}
	return 0;
}
