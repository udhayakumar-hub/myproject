//v19ce6j2-JERON MELVA S Q
#include<stdio.h>
int main()
{
int j,n,c=0;
for(n=1;n<=1000;n++)
{
for(j=2;j<=n;j++)
{
if(n%j==0)
break;
}
if(n==j)
{
if(n%10==1)
printf(" %d",n);
}
}
}
