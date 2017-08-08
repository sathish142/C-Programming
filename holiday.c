#include<stdio.h>
void main()
{
int n;
printf("1.sunday\n2.monday\n3.tuesday\n4.wednesday\n5.thursday\n6.friday\n7.saturday");
scanf("%d",&n);
switch(n)
{
case 1:printf("false");
break;
case 2:printf("true");
break;
case 3:printf("true");
break;
case 4:printf("true");
break;
case 5:printf("true");
break;
case 6:printf("true");
break;
case 7:printf("true");
break;
default:printf("invalid data");
}
}
