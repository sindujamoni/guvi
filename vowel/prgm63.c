#include<stdio.h>
int main()
{
        char str[20];
        int i,count=1;
        printf("enter the words");
        scanf("%[^\n]s",str);
        for(i=0;str[i]!='\0';i++)
{
        if(str[i]==' ')
        {
                count=count+1;
}
        }
printf("%d",count);
return 0;
}
      
