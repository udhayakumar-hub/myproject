//Abinandh Srivatsan
//V19CE7A7
#include<stdio.h>
int main()
{
	int n,x,p,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("To clear a bit enter 1 or to complement a bit enter 2 : ");
	scanf("%d",&x);
	printf("Before operation\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i==24||i==16||i==8) printf(" ");
	}
	printf("\nEnter the position you want to perform the operation (LSB being 0) : ");
	scanf("%d",&p);
	switch(x)
	{
		case 1 : n&=~(1<<p);break;
		case 2 : n^=1<<p;break;
	}
	printf("After operaation\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i==24||i==16||i==8) printf(" ");
	}
	printf("\n");
	
}
