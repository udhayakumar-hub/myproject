/* NAME:KARTHICK.S
   BATCH ID:V19CE7K3 */



#include<stdio.h>
int main()
{
int n,pos,num,res;
printf("enter the  number:\n");
scanf("%d",&num);
printf("enter the  position:\n");
scanf("%d"&pos);
printf("enter 1: to set a bit\t2:to check the status\n");
scanf("%d",&n);
switch(n)
{
case 1:res=num|(1<<pos);
break;
case 2:((num>>pos)&1)?puts("set"):puts("clear");
default:printf("enter valid option\n");
}
}

