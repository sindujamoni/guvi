#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int i, n;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s",&a[i]);
    
    n= strlen(a);
    
    for(i=0;i < n ;i++)
{
        if(a[i] != a[n-i-1])
        {
            flag = 1;
        }
        else
        {
            flag=0;
        }
    if(flag==1)
    {
        printf(" not a palindrome");
    }    
    else {
        printf("palindrome");
    }
    return 0;
}
}
