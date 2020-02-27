/*JINCY C A
  V19CE7J1*/
#include<stdio.h>
#include<math.h>
int main()
{
int i,sq,n,rem;
for(n=5000;n>=1000;n--)
{
	i=1;
  	sq=sqrt(n);
	while(i<=sq)
	{
		if(n%2==0)
		break;
		i++;
	}
	if(i==sq+1)
	{
		rem=n%10;
		if(rem==3)
		printf("%d\t",n);
	}
	
}	
printf("\n");
}
 

  

