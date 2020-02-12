#include<stdio.h>
int main()
{
int n,r1=0,r2=0,r3=0,t=0;
printf("enter three digit n value\n");
scanf("%d",&n);
t=n;
while(t!=0)
{
r1=t%10;
t=t/10;
r2=t%10;
t=t/10;
r3=t%10;
t=t/10;
}

if((r1<r2)&&(r1<r3))
{
	if(r2<r3)
	printf("the second lowest no of %d is %d \n",n,r2);
	else
	printf("the second lowest no of %d is %d \n",n,r3);
}
else if((r2<r1)&&(r2<r3))
{
	if(r1<r3)
	printf("the second lowest no of %d is %d \n",n,r1);
	else	
	printf("the second lowest no of %d is %d \n",n,r3);	
}
else if((r3<r1)&&(r3<r2))
{
	if(r1<r2)
	printf("the second lowest no of %d is %d \n",n,r1);
	else
	printf("the second lowest no of %d is %d \n",n,r2);
	
}
}
