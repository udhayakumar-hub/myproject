//Giriharan AB
//v19ce6g4
#include<stdio.h>
int main()
{

	int i,r,sum=0,n;
	printf("Enter the n values:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+n;
		n=n/10;
		
		
	}
	if(sum>n&&1==1)
	printf("The second lowest number=%d\n",sum);
}
