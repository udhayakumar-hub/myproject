//v19ce6s8 suganya d
#include<stdio.h>
main()
{
int n,i=1;
printf("enter the alue of n\n");
scanf("%d",&n);
abc:
if(i<=10)
{
printf("%d*%d=%d\n",n,i,n*i);
i++;


goto abc;
}
}
