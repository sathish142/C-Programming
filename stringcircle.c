#include <stdio.h>
void main()
{
	int c=0,j=1,check=0,i;
	char a[100];
	scanf("%s",&a);
	if(strlen(a)>=8)
	{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='L')
		{
			c--;
			if(c==4||c==-4)
			{
				j++;
				c=0;
				check++;
			}
		}
		else if(a[i]=='R')
		{
			c++;
			if(c==4||c==-4)
			{
				j++;
				c=0;
				check++;
			}
		}
	}
	}
	if(check>0)
	printf("\nYES");
	else
	printf("\nNO");
}
