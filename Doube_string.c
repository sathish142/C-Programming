#include<stdio.h>
void main()
{
	char s[50];
	int i=0,k,l=0,f=0;
	scanf("%s",s);
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	k=l-1;
	for(i=(l/2)-1;i>=0;i--)
	{
		if(s[i]!=s[k])
			f=1;
		k--;
	}
	if(f==0)
		printf("It is double string");
	else
		printf("It is not double string");
}
