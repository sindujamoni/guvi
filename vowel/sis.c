#include<stdio.h>
int main()
{
char ch;
printf("enter any character");
scanf("%c",&ch)
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("entered character is vowel");
}
else
{
printf("entered character is consonant");
}
return 0;
}
