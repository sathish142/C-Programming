#include<stdio.h>
void main()
{
int h1,m1,tm1,h2,m2,tm2,lm;
scanf("%d%d",&h1,&m1);
tm1=h1*60;
tm1=tm1+m1;
scanf("%d%d",&h2,&m2);
tm2=h2*60;
tm2=tm2+m2;
lm=tm1-tm2;
printf("%d",lm);
}
