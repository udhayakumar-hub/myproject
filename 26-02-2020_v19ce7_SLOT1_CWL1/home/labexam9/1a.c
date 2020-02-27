// VIGNESHWAR V19CE7V1
#include<stdio.h>
int main()
{
int c,pos,num,a;
printf("select the case\nif case 1 to check set or clear only\nif case 2 to set a bit and show final status\n");
scanf("%d",&c);
switch(c)
{
case 1:	printf("Enter the number and position\n");
	scanf("%d %d",&num,&pos);
	num&(1<<pos)?puts("set"):puts("clear");
	break;	
case 2: printf("Enter the number and position\n");
	scanf("%d %d",&num,&pos);
	num&(1<<pos)?puts("set to check"):puts("clear but set with 1");
	a=num>>pos|1;
	printf("set\n",a);
	break;
default:printf("entter the valid case\n");
}	

}
