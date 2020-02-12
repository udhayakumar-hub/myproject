//prem.s --> v19ce6/p2
#include<stdio.h>
main()
{
int n,r1,r2,r3,res;
printf("Enter value\n");
scanf("%d",&n);
r1=n%10;
n=n/10;
r2=n%10;
n=n/10;
r3=n%10;
res=(r1>r2)?(r2<r3?r3:r2):(r1<r3?r3:r1);
printf("%d \n",res);
}
