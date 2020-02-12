//santhosh kumar v19ce6s7
#include<stdio.h>
int main()
{ int n,i,t,s,temp;
//printf("enter the n value\n");
//scanf("%d",&n);
for(n=1000;n>1;n--)
{
for(i=2;i<n;i++)
{
 if(n%i==0)
   break;
}
if(i==n)
{
  s=n;
// printf("%d ",s);
 
s=s%10;

if(s==1)
printf("%d ",i);
}
}
//temp=n;
//n=n%10;
//if(n==1)
//printf("%d ",i);
}


