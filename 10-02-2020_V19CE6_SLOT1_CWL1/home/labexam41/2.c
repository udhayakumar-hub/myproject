//v19ce6s1
//sukruthsoorya

#include<stdio.h>
int main()
{
	int n,i,count;
	for(n=1000,count=0;n>1;n--);
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			break;
		}
		if(i==n)
		{
			//if(n%10==1)
			{
				printf("%d",n);
				count++;
			}
		}
	}
}
