#include<stdio.h>
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(((year%4==0)&&(year%100==0))||(year%400))
printf("leap year");
else
printf("not leap year");
}
