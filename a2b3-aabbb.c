#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char a[50];
int i=0,j,k=1,l;
scanf("%s",a);
for(i=0;i<strlen(a);i=i+2)
{
l=atoi(&a[k]);    
for(j=0;j<l;j++)
{
printf("%c",a[i]);
}
k=k+2;
}
}
