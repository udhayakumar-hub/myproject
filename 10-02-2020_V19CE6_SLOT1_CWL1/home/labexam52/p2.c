//LUBNA .K
//V19CE6L2
#include<stdio.h>
int main()

{
int i,j,n;
printf("enter value of n\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
for(j=1;j<=n;j++)
printf("%d * %d=%d\n",i,j,i*j);
printf("\n");
}
}
