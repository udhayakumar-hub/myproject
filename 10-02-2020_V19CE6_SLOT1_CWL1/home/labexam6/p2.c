/*name:Tamilarasi.A
batch id:v19ce6t1*/

#include<stdio.h>
int main()
{
int n,i;
printf("enter the n value\n");
scanf("%d",&n);
printf("mutiplication table from 1: \n");
for(n=1;n<=10;n++)
{
printf("\n");
for(i=1;i<=10;i++)
{
printf("%d * %d = %d\n",n,i,n*i);
}
}
}

