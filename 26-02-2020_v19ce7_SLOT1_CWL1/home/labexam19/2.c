/*
joice joseph
v19ce7j2
*/

#include<stdio.h>
#include<math.h>
int main()
{

int n,i=2,sq;

for(n=5000;n>1000;n--)
{
i=2;
sq=sqrt(n);
while(i<=sq)
{
if(n%i==0)
break;
i++;
}
if(i==sq+1)
{
if(n%10==3)
printf("%d\n",n);
}
}
}

