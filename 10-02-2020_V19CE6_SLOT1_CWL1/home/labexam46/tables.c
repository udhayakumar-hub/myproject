//Jegan Bruno
//V19CE6J1
#include<stdio.h>
int main()
{
int i,j,c;
for(i=1;i<=10;i++)
{
printf("%d multiplication table\n",i);
printf("\n");
for(j=1;j<=12;j++)
{
c=i*j;
printf("%d * %d = %d\n",j,i,c);
}
printf("\n");
}
}

