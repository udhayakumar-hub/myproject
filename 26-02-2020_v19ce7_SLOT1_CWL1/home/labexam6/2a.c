#include<stdio.h>
int main()
{
int num,pos,n,x,n1,n2;
printf("Enter the number\n");
scanf("%d",&n);
printf("enter the bit position\n");
scanf("%d",&pos);
printf("enter option for to clear(1) and complement(2) the bit\n");
scanf("%d",&x);
switch(x)
{
case 1: printf("%d\n",n1=num&(~(1<<pos)));break;
case 2: printf("%d\n",n2=num^(1<<pos));break;
}
}
