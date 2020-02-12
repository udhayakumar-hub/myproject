#include<stdio.h>
int main()
{
	int i,n;
	

	for(n=1000;n>0;n--)
	{
	for(i=2;i<n;i++)
	{
	if(n%i==0)
	break;
	else
	continue;
	}
	if(i==n)
	{
	if(n%10==1)
	printf("%d\n",n);
	}
	}
	printf("1");
	printf("\n");
}
