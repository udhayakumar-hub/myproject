/*
  Name:Mohammed Siraj P
  Vector ID:v19ce7m2
*/
#include<stdio.h>
int main()
{
int num,pos,pos1,num1,num2;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the position to clear\n");
scanf("%d",&pos);
num1=num&~(1<<pos);
printf("number after clearing=%d\n",num1);
printf("enter the position to complement\n");
scanf("%d",&pos1);
num2=num^(1<<pos1);
printf("number after complement=%d\n",num2);
}
