#include<stdio.h>
int main()
{
int n,s=0,r,i,a;
for(a=2000;a<=5000;a++)
{
s=0;
n=a;
for(i=1;i<=4;i++)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(s==a)
printf("%d\n",s);
}
}

