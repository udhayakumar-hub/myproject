#include<stdio.h>
int main()
{
int n,m,i; 
printf("Enter the Number\n");
scanf("%d",&n);

for(i=1;i<=10;i++)
{
m=n*i;
printf("%d x %d = %d\n", n,i,m);
}
}
