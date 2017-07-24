#include<stdio.h>
void main()
{
int n,i=0;
scanf("%d",&n);
while(n!=0)
{
i++;
n=n\10;
}
printf("%d",i);
}
