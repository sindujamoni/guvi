#include<stdio.h>
int main()
{
int i,j,n=3,a[3],temp=0,max,min;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
    {
    for(j=i+1;j<3;j++)
    {
        if(a[i]>a[j])
        {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
}
}
max=a[2];
printf("%d",max);
min=a[0];
printf("%d",min);
return 0;
}
