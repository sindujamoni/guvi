#include<stdio.h>
int main()
{
    int n1,n2,i;
    char sym;
    printf("enter the two numbers");
    for(i=1;i<=4;i++)
    {
        scanf("%d %c %d",&n1,&sym,&n2);
        if(sym=='/')
        {
            printf("%d",n1/n2);
        }
        else
        {
            printf("%d",n1%n2);
        }
    }
    return 0;
}
