#include<stdio.h>
int main()
{
        int num;
        printf("enter the  number");
        scanf("%d",&num);
        while(num%10!=0)
        {
                num=num+1;
                
        }
        printf("%d",num);
        return 0;
}
