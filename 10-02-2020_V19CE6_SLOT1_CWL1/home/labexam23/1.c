#include<stdio.h>
main()
{
int r,a,b,c,d,e,t1=0,t2=0,count=0,n,i,N;
printf("enter the number\n");
scanf("%d",&n);
N=n;
while(N!=0)
{
N/=10;
count++;
}
for(i=1;i<=count;i++)
{
r=n%10;
switch(i)
{
case 1: a=r;break;
case 2: b=r;break;
case 3: c=r;break;
case 4: d=r;break;
case 5: e=r;break;
default : printf("out of limit");
return;
}

if((a>b)&&(a>c)&&(a>d)&&(a>e))
printf("%d",a);
if((b>c)&&(b>d)&&(b>e)&&(b>a))
printf("%d",b);
if((c>b)&&(c>c)&&(c>d)&&(c>a))
printf("%d",c);
if((d>b)&&(d>c)&&(d>d)&&(d>a))
printf("%d",d);
if((e>b)&&(e>c)&&(e>d)&&(e>a))
printf("%d",e);

}}
