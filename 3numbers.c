#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a&b&c);
if(a>b&&a>c)
printf("a is big number");
else if(b>a&&b>c)
printf("b is big number");
else
printf("c is big number");
}
