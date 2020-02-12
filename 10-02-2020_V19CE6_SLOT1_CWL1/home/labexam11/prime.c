#include<stdio.h>
main()
{
int i,j,n;
printf("enter the limit\n");
scanf("%d",&n);
for(i=1000;i>=n;i--)
{
if(i%2==1&&i%1==0)
printf("%d \t",i);
}
}
