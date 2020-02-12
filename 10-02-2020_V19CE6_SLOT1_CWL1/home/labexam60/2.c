#include<stdio.h>
int main()
{
int i=1,j=1;
abc:
printf("%d*%d=%d\n",i,j,i*j);
++j;
if (j>10)
{
++i;
j=1;
}
if(i<=10)
{
goto abc;
}
}
