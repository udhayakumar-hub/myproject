/*prime number
fadik k
v19ce7f1*/
#include<stdio.h>
#include<math.h>
int main()
{
int i=2,n,sq;
sq=sqrt(n);
i=2;
for(n=1000;n<5000;n++)
{
sq=sqrt(n);
i=2;
while(i<=sq)
{
if(n%i==0)
break;
i++;
}
if((i==sq+1) &&(n%10==3))
printf("%d ",n);}
printf("\n");
}
