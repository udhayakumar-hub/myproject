v19ce7k7,j.karthikeyan
#include<stdio.h>
int main ()
{
	int op,num,pos;
	printf("enter the no\n");
	scanf("%d",&num);
	printf("possion\n");
	scanf("%d",&pos);
	printf("option 1 or \n 1. clear 2.complement\n");
	scanf("%d",&op);
	printf("before changing\n");
	for(i=31;i>=0;i--)
	printf("%d",&(num>>i));
printf("\n");
scitch(op)
{ 
case 1: num=num&(~(1<<pos));break
case 2: num=num^(1<<pos);break
default:printf("invalid"); break
}
for(i=31;i>=0;i--)
printf("%d",1&(NUM>>I));
print('\n");
}
