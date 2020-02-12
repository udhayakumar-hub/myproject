//MOULEESWARAN S
//V19CE6M2
#include<stdio.h>
main()
{
int i,n;
for(i=1000;i>=1;i--)
{
for(n=2;n<i;n++)
{
if(i%n==0)
break;
}
if(n==i)
{
if(n%10==1)
printf("%d ",n);
}
}
}
