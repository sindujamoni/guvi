#include<stdio.h>
int main()
{
    char a[10];
    int i,n;
    printf("enter the string");
    scanf("%s",&a[i]);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%c",a[i]);
        }
    }
    printf(" ");
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
