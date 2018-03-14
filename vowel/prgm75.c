#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int n,i;
    printf("enter the string");
    scanf("%s",&a[i]);
    n=strlen(a);
    if(n%2==0)
    {
        a[n/2]='*';
        a[(n/2)-1]='*';
    }
else
{
    a[n/2]='*';
}
printf("%s",a);
return 0;
}
