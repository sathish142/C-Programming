#include<stdio.h>
void main()
{
	int n,i=0,r,s=0,k,s1=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	k=s;
	while(s>0)
	{
		r=s%10;
		s1=s1*10+r;
		s=s/10;
	}
	if(s1==k)
		printf("Palindrome");
	else
		printf("Not palindrome");
}
