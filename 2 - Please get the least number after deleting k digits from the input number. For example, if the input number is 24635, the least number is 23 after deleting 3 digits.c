#include<stdio.h>
void main()
{
	int i,j,a[5],t,k;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n");
	scanf("%d",&k);
	for(i=0;i<(5-k);i++)
	{
		printf("%d",a[i]);
	}
}
