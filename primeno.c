#include<stdio.h>
void main()
{
int n,i,a=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if(a==0)
printf("prime");
else
printf("not prime");
}
