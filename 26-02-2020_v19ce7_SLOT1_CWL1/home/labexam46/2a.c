/*
Name: Suresh
Vector ID: v19ce7s3
program : Program to clear a particular bit and complement of particular bit using swich 
*/
#include<stdio.h>
int main()
{
int a, num, pos;
printf("enter the number and Position\n");
scanf("%d %d",&num,&pos);
printf("enter the option clear for 1 or complement for 2 to a\n");
scanf("%d",&a);

switch(a)
{
case 1: num=num & ~(1<<pos); break;	//To Clear a particular bit
case 2: num=num ^ (1<<pos);  break;	//To Complement of particular bit
default :printf("Invalid option");break;
}
printf("%d",num);
}

