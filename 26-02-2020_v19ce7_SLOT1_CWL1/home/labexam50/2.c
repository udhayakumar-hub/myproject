/*	NAME      : S.KARTHIKEYAN
	VECTOR ID : v19ce7k8
*/

#include<stdio.h>
int main()
{
int num,pos;
char op;
printf("Enter the number:");
scanf("%d",&num);
switch(op)
{
case(0):num=num&~(1<<pos);
break;
case(1):num=num^(1<<pos);
break;
default:
printf("This is an invalid number");
}
}
