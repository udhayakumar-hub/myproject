//P.kotteswaran
//V19CE6P3
#include<stdio.h>
int main()
{
int n,i,r;
printf("prime numbers from 1000 to 1 ends with 1:\n");
for(n=1000;n>=1;n--)
{
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(n==i)
{
r=n%10;
if(r==1)
printf("%d ",n);
}
}
printf("\n");
}


