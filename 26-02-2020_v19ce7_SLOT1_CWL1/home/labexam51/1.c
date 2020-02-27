//Name	   : Sathgurunathan S
//Batch Id : V19CE7S8

#include<stdio.h>
int main()
{
int i,j,pos,num,num1,num2,op;
printf("Enter the Number and Position ");
scanf("%d%d",&num,&pos);

num1=num|(1<<pos);		 //for Set
num2=num&(1<<pos); 	  	 //for check

for(i=31;i<=0;i--)
printf("%d",num1);



printf("Enter the Option 1 for Set or 2 for check the Status\n");
scanf("%d",&op);
switch(op)
{
	case 1: printf("%d",num1);
		printf("\n");
		break;

	case 2: if(num2==0)
		printf("The Particular Bit is Clear\n");
		else
		printf("The Particular Bit is Set\n");
}
}
