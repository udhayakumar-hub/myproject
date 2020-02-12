//G.SANGEETHA.G-V19CE6S11-LOWEST NUMBER//
#include<stdio.h>
int main()
{
int n,i,low;
printf("enter the n value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<low)
low=i;
}
printf("%d",n);
}
