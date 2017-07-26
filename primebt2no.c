#include<stdio.h>
void main()
{
int n1,n2,i,j,a;
scanf("%d%d",&n1,&n2);
for(j=n1+1;j<n2;j++)
{
	a=0;
for(i=2;i<=j/2;i++)
{
if(j%i==0)
{
a=1;
break;
}
}
if(a==0)
printf("%d ",j);
}
}
