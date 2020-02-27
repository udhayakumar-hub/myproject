// v19ce7s2
// Suraj Sankar

#include<stdio.h>
int main()
{
int pos, num, op ;
printf("Select the operation -1. To set a bit    2.To find the status of bin ");
scanf("%d",&op);
switch(op)
{case 1:
{printf("Enter the num and pos\n");
scanf("%d %d",&num ,&pos);
num=num|(1<<pos);
printf("%d\n",num);}
case 2:
{printf("Enter the Number and postion to check the bit\n");
scanf("%d %d",&num, &pos);
num= (num<<pos)&1;
printf("%d",num);
}
}
																					
}
