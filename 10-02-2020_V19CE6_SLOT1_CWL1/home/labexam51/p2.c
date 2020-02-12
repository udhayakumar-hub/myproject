/* author : v19ce6s6 */
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Prime number from 1000 to 1\n");
	for(i=1000;i>=1;i--)
	{	
		if((i%2 == 0) && (i!=2))
		continue;
		for(j=2;j<i;j++)
			if((i%j == 0) && (i!=2))
			break;
		if((j==i)||(i==1))
		printf("%d ",i);	
	}
	printf("\n");
}
