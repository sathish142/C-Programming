#include<stdio.h>
void main()
{
int u,l,i;
scanf("%d%d",&u,&l);
i=u;
while(i<l)
{
i++;
if(i%2!=0)
printf("%d ",i);
}
}
