#include<stdio.h>
int main()
{
int a=0,b=1,fib,n,i;
scanf("%d",&n);
printf("%d %d",a,b);
for(i=3;i<=n;i++)
{
fib=a+b;
a=b;
b=fib;
printf("%d ",fib);
}
}
