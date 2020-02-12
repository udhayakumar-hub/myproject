//mangaiyarkarasi v19ce6m4
#include<stdio.h>
int main()
{
int n,i,r,s=0;
printf("enter the n value:");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if(r>s)
printf("%d\n",r);
s=s+r;
n=n/10;
}
}
