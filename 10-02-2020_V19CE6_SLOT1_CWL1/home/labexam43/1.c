#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(n%i==0)
			break;
		}
		if(c==n)
		{
			c++;
		}
		if(c==1)
		{
			printf("\n");
		}
	}
}


