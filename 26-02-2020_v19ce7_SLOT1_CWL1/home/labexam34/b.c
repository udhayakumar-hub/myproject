//Abinandh Srivatsan
//V19CE7A7
#include<stdio.h>
int main()
{
	int n,t,rev;
	for(n=2000;n<=5000;n++)
	{
		for(rev=0,t=n;t>0;t/=10)
		{
			rev=t%10+rev*10;
		}
		if(rev==n)
		{
			printf("%d ",n);
		}
	}
	printf("\n");
}
