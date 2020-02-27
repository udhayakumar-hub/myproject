//Name: Mahesh Manohar Gangurde
//Vector ID: V19CE7M8

#include<stdio.h>
int main()
{
int num,pos,op;   // num-> number, pos-> position, op-> operation
printf("Enter the number\n");
scanf("%d",&num);

printf("Enter 0 for clear operation and 1 for compliment operation\n");
scanf(" %d",&op);

printf("Enter the Position of bit\n");
scanf(" %d",&pos);
	switch(op)
	{
	case 0: 
		{
		num = num&~(1<<pos);
		printf("Result after operation is %d\n",num);
                break;
		}
	case 1:
		{		
		num = num^(1<<pos);
		printf("Result after operation is %d\n",num);
                break;	
	        }
	default : printf("Invalid operation enter\n"); break;
	}
}
