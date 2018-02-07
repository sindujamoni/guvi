#include<stdio.h>
int main()
{
int a=5,b=10;
print("values before swapping %d%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("values after swapping %d%d",a,a);
return 0;
}
