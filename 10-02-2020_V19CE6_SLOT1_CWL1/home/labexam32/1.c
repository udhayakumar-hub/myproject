//U.ANUP V19CE6U1
#include<stdio.h>
int main()
{
int n,r1,r2,l1,l2,m,f=0,a[10],i=0,j;
printf("Enter an integer\n");
scanf("%d",&n);
if(n<0)
m=-n;
else
m=n;
while(m>0)
{
r1=m%10;
m=m/10;
a[i]=r1;
i++;
}


l1=a[0];
for(j=1;j<i;++j)
{
if(l1<a[j])
l1=a[j];
}
l2=a[0];
for(j=0;j<i;++j)
{
if(l1!=a[j])
if(l2<a[j])
l2=a[j];
}

printf("Second Lowest Digits is %d\n",l2);

}
