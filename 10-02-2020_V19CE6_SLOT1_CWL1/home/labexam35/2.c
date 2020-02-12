//THAMBI DURAI.U
//V19CE6U2
#include<stdio.h>
main()
{
int n,i,p;
for(n=1000;n>1;n--)
{
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(i==n)
{
p=i%10;
if(p==1)
printf("%d ",i);
}
}
printf("\n");
}

