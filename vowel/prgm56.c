#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag;
    char a[20];
    printf("enter the string");
    scanf("%s",&a[i]);
    for(i=0;i<n;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
        {
        flag=1;
        }
         else if(a[i]>='0'&&a[i]<='9')
            {
            flag=2;
        }
        else
        {
            flag=0;
        }
    }
        if(flag==1 && flag==2)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        return 0;
    }
