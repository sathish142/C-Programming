#include<iostream.h>
#include<conio.h>
int main()
{
int n,fact=1;
cin>>n;
for(int i=1;i<=n;fact=fact*i,i++);
cout<<fact;
return (0);
}
