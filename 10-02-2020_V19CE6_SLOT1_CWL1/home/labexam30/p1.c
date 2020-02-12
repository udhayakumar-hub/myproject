//G.Dileep reddy Batch ID:v19ce6G1
#include<stdio.h>
int main()
{
int n,r=0,b,a,s,s1;
printf("enter the n value\n");
scanf("%d",&n);
a=b=n;
s=n%10;
while(a!=0)
{
r=a%10;
if(r>s)
s=r;
a=a%10;
}
label:
s1=b%10;
if(a==b)
{
s1=b%10;
goto label;
}
while(b!=0)
{
r=b%10;
if(r<s1)
{
printf("second lowest =%d",r);
}
}
}

