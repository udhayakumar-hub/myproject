//abdul baheej
//v19ce5a3



#include<stdio.h>
int main()
{
	int i,n,r,j;
	n=1000;
	for(i=n;i>=1;i--)
	{
		for(j=2;j<i;j++)
		{
		if(i%j==0)
		break;
		else
	       continue;
		}
		if((i==j)&&(i%10==1))
		printf("  %d",i);
		

	}
printf("\n");	
}
