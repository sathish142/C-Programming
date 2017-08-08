#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int i,t;
gets(s);
for(i=0;i<strlen(s);i=i+2)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
puts(s);
}
