/*
NAME :NIRMAL RAGAVAN R
VECTOR ID:V19CE6N3
*/
#include<stdio.h>
main()
{
	int a,c,i=0,rem,sm1,sm2,temp=0,val,b;
	printf("enter the given integer\n");
	scanf("%d",&a);
	temp=sm2=b=a;
	while(a!=0)
	{
		rem=a%10;
		sm1=rem;
		if(sm1<sm2)
			sm2=sm1;
		//else
		//temp=sm1;
		a/=10;
	}
	/*while(b!=0)
	  {
	  rem=b%10;
	  sm1=rem;

	  if((sm1<temp))
	  {
	  c=sm1;

	  }
	  b=b/10;

	  }*/
	printf("%d",sm2);
}
