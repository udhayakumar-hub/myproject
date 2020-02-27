//Name:K.Naveen kumar.
//Batch:v19ce7k4.

#include<stdio.h>
int main()
{
int num,pos,op;
printf("enter the values\n",num);
scanf("%d",&num);
printf("enter the set value\n");
scanf("%d",&op);
 switch(op)
{
case 0:
{
num=num|(1<<pos);
printf("enter the set value\n",num);
}
default:
{
num=(num|(1<<pos) && (num&1<<pos));
printf("1 is set\n 0 is clear\n",num);
}
}
}

