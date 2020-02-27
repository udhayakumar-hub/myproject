/*	Name : Kamalanathan N
	Vector ID : V19CE7K6

	2) a. Write a menu based program to clear a particular bit and compliment of a particular bit.
*/
#include<stdio.h>
int main()
{
	int num,op,pos,i;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Select the Options : \n");
	printf("1) Clear a particular bit\n2) Compliment a particular bit\n"); 
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: printf("Enter the position to clear : ");
			scanf("%d",&pos);
			printf("Before Clearing : \n");
			for(i = 31;i>=0;i--)
				printf("%d",num>>i&1);
			printf("\n");		
			num = num&~(1<<pos);
			printf("After Clearing : \n");
			for(i = 31;i>=0;i--)
				printf("%d",num>>i&1);
			printf("\n");
			break;
		case 2: printf("Enter the position to compliment : ");
			scanf("%d",&pos);
			printf("Before Complimenting : \n");
			for(i = 31;i>=0;i--)
				printf("%d",num>>i&1);
			printf("\n");
			num = num^(1<<pos);
			printf("After Complimenting : \n");
			for(i = 31;i>=0;i--)
				printf("%d",num>>i&1);
			printf("\n");
			break;
		default: printf("Invalid option !! \n");
			break; 
			
	}
}

	 	
