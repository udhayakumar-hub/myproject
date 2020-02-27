//	Name  : Athul
//	Batch : V19CE7-A6

#include<stdio.h>
#include<math.h>
int main()
{
	int num,sq,i;
	for(num=5000;num>=1000;num--)
	{
			
		sq = sqrt(num);
		i=2;
		while(i<=sq)
		{
			if( num%i==0)
			i++;
		}
		if(i==sq+1)
		printf("%d",i);
	}
	printf("\n");


}
