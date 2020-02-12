//name:J.skandakumar
//vector id:v19ce6j3
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(n=1000;n>1;n--)
	{
		for(i=0;i<1;i++)
		{
			if(n%10==i)
			{
			i++;
			}
			if(i==n)
			printf("%d\n",n);
		}
	}
}


