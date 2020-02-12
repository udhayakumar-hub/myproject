//abdul baheejm
//v19ce5a3



#include<stdio.h>
int main()
{
	int i,n,big1=0,big2=0,r;
	printf("enter nymber\n");
	scanf("%d",&n);

	while(n!=0)
	{ 
		r=n%10;
		n=n/10;
		if(r>big1)
		{ big2=big1;
		big1=r;}
		else if(r>big2)
		big2=r;
	}
	printf("second biggest=%d\n",big2);
		
}
