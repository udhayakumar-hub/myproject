#include<stdio.h>
int main()
{
int r,s,t,n;
for(n=2000;n<=5000;n++)
 {
  t=n,s=0,r;
  while(t!=0)
  {
   r=t%10;
   s=s*10+r;
   t=t/10;
  }
 if(s==n)
 printf("%d ",n);
 }
}
