#include<stdio.h>
void main()
{
int n=15;
printf("%d\n",(n*(n+1)/2));
while(n<=45)
{
if(n%2!=0)
{
printf("%d ",n);
}
n++;
}
}
