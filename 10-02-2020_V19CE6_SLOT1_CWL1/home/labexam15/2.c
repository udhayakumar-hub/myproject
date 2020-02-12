//Arathi menon v19ce6a4//
#include<stdio.h>
int main()
{
int i,n;
for(n=1000;n>1;n--)
{
for(i=2;i<=n;i++)
{
if(n%i==0)
break;
}
if(i==n)
{if(n%10==1)
printf("%d ",n);
}
}
}
