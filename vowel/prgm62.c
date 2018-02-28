#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,m,flag;
    printf("enter the string");
    scanf("%s",&a);
    m=strlen(a);
    for(i=0;i<m;i++)
    {
        if((a[i]=='0')||(a[i]=='1'))
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        if(flag==0)
        {
        printf("no");
    }
}
    return 0;
}
