//prem.s   --> v19ce6/p2
#include<stdio.h>
main()
{

int n,i,t;
for(n=1000;n>=1;n--)
{

 for(i=2;i<=n;i++)
 {
 if(n%i==0)
 
  break;
}
if(n==i)
 {
if((i%10)==1)
 printf("%d ",n);
}
}

printf("\n");
}

