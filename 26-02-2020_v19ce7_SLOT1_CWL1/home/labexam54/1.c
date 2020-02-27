#include<stdio.h>
int main()
{
int i,n,p;
printf("enter option:\t1.clear\t2.compliment");
scanf("%d",&i);
printf("enter number\n");
scanf("%d",&n);
printf("enter pos\n");
scanf("%d",&p);
switch (i)
{
 case 1:n=n&(~(1<<p));
       printf("%d",n);
       break;
 case 2:n=n^(1<<p);
       printf("%d",n);
       break;
 default:printf("invalid option");
       break;
}
}
