//LUBNA .K
//V19CE6L2
#include<stdio.h>
int main()
{
int l1,l2,n,r,t,t2;
printf("enter value of n\n");
scanf("%d",&n);
for(l1=n,t=n;t!=0;t=t/10)
{
r=t%10;
if(r<l1)
l1=r;
}

for(t2=l1,l2=t2,t=n;t!=0;t=t/10)
{
r=t%10;
if(r>l1)
l2=r;
if(l2==l1)

continue;
}
printf("second least digit in n=%d\n",l2);
}


