//Name=Nikunj solanki
//ID=V19CE6N5

#include<stdio.h>
int main()
{
	int num,r;
	printf("enter the number\n");
	scanf("%d",&num);

	while(num!=0)
	{
		r=num%10;
		num=num/10;
		if(r>num)
		printf("%d\n",r);
	}	
	
	
			
	
}
