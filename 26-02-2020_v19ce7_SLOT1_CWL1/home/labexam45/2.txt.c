#include<stdio.h>
int main()
{
int num,x,pos;
//char op;
printf("enter the number:");
scanf("%d",&num); 
printf("enter pos \n");
scanf(" %d",pos);
x=num&(1<<pos)?:1:0;

switch(x)
{
case 1:printf("set");
         break;
default:printf("invalid");
        break;
}
}                 
