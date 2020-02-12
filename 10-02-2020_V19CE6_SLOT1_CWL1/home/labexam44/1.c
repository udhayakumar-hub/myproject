//name:ATHIVEL .A
//BATCH:V19CE6A1
#include<stdio.h>
int main()
{
	int n,a=0,r;
	printf("enter the integer\n");
	scanf("%d",&n);
	for(;n!=0;)
	{
		r=n/10;
		n=n%10;
		a=n%10;
	
	if(a>r)
		printf("lower digit:%d",r);
	else
		printf("lower digit:%d",a);
	}
}


