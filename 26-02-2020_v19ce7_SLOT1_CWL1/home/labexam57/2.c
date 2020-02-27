#include<stdio.h>
#include<math.h>
int main()
{
int n,sq,i; 
for(n=1;n<1000;n++)
{
sq=sqrt(n);
i=2;
if(n%i==0)
break;
i++;
if(i==sq+1)
printf("%d",n);
}
printf("\n");
}

