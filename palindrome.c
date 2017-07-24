#include<stdio.h>
void main()
{
int n,orig,rev=0,rem;
scanf("%d",&n);
orig=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=(n/10);
}
if(orig==rev)
printf("palindrome");
else
printf("not palindrome");
}
