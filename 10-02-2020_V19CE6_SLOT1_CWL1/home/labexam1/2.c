//Althaf mohammed V A
// v19ce6a6
#include<stdio.h>
main()
{
int n,i,c;
for(n=1000;n>=1;n--)
 { 
  for(i=1,c=0;i<=n;i++)
   { 
    if(n%i==0)
    c++;
   }
if(c==2)
if(n%10==1)
printf("%d ",n);
}
printf("\n");
}

