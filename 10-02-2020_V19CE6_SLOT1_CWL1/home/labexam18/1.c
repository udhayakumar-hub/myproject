//name:N.Hari
//batch no:v19ce6n2
#include<stdio.h>
int main()
{	
	int n,n1,rem,s=0,s1;
	printf("enter the number\n");
	scanf("%d",&n);
	n1=n;
	for(;n!=0;)
	{	rem=n%10;
		if(rem>s)
		{   
			s=rem;
  		}
		n=n/10;

	}
	for(;n1!=0;)
	{	rem=n1%10;
		if(s!=rem&&rem<s&&rem!=1)
		s=rem;
			
		n1=n1/10;

	}
printf(" s=%d\n",s);

}
