//SURIYA S
//V19CE6S3

#include<stdio.h>
int main()
{
int n,i,m=0,r;
for(n=1000;n>=1;n--)
{
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(i==n)
{
for(r=1;r<1000;r++)
{m=10*r+1;
if(i==m)
printf("%d ",i);
}
}
}
}
