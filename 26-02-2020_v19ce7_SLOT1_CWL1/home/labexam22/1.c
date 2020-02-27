//name anshif p k
//v19ce7a4
//menu based program to clear and compliment of a bit
#include<stdio.h>
int main()
{
int i,x;
printf("enter the particular bit");
scanf("%d",&i);
printf("do you want to clear or compliment");
scanf("%d",&x);
switch(x)
{
case 1 : (num&=~(1<<i);break;
case 2 : (num^=(1<<i);break;
default:printf("invalid\n")
}
}
