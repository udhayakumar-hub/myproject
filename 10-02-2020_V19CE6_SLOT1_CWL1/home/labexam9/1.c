//GNANA SEKAR V19CE6G3 QUESTION NO. 2
#include<stdio.h>
int main()
{
int n,last,i,rem,result;
for(n=1000;n>=1;n--)
{
for(i=2;i<n;i++)
{
if(n%i==0)
break;
if(n%i!=0)
{
if(n%10==1)
result=n;
}
printf("%d ",result);
}
}
}
