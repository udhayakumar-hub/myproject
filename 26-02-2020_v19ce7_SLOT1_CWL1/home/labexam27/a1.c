//name :dhara kothiya id no:v19ce7k5
#include<stdio.h>
#include<math.h>
int main()
{
int n,sq,i=1,l;
for(n=5000;n>1000;n--)
{
 l=n;i=2;
 sq=sqrt(n);
 while(i<=sq)
  {
   if(n%i==0)
   break;
   i++;
  }  
 if(i==sq+1)
  {
  
  if(l%10==3)
    printf("%d ",l);
  }

}
printf("\n");
}



