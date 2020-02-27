//Anuraj S
//v19ce7a1
//question a
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the operation\n 1)clear a bit\n 2)compliment of a bit");
	scanf("%d",&y);
	x=0;
	z=0;
	if(y==1)
	{
		printf("Enter the number and position =");
		scanf("%d%d",&x,&z);
		x=x^(~(1<<z));
		unsigned i;
		for (i = 1 << 31; i > 0; i = i / 2)
			(x & i)? printf("1"): printf("0");
		printf("output =%d",x);

	}
	else if(y==2)
	{
		printf("Enter the number and position =");
		scanf("%d%d",&x,&z);
		x=x^(1<<z);
		unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (x & i)? printf("1"): printf("0");
		printf("Output =%d",&x);

	}
	else
		printf("Invalid entry");

}
