//R.mohan raj
//v19ce6r2
#include<stdio.h>
int main()
{

	int  r,n,i,c=0,a,s=0,s1,s2;
	printf("enter the num\n");
	scanf("%d",&n);
	while(n!=1)
	{
		n=n%10;
		c++;
	}
	for(i=1;i<=c;i++)
	{
		while(n!=0)
		{
			r=n%10;
			printf("%d",a+i);

			if((a+i)<s)
				s1=a+i;
			else if((a+i)>s)
				s2=a+i;
		}
	}

	printf("%d",s1);
	printf("%d",s2);
}
