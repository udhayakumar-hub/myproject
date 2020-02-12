//v19ce6s5-m.yasmin
#include<stdio.h>
main()
{
int n,i,count;
printf("enter the n value\n");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
break;
i++;
}
if(i==n)
printf(" prime number");
else
printf("not a prime number");
}

