#include<stdio.h>
int main()
{
    int hr,min,n;
    printf("enetr the number");
    scanf("%d",&n);
    hr=n/60;
    min=n%60;
    printf("%d%d",hr,min);
    return 0;
}
