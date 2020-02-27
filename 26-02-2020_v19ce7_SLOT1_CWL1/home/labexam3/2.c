/* Name: Angel Reena. C.r
   Batch ID: v19ce7a9 */

#include<stdio.h>
main()
{
int n,i,count=0;
printf("enter the n value");
scanf("%d",&n);
if((1000<=n)&&(n<=5000))
{
	for(i=0;i<=n;i++)

	{	

	if(i%n==0)
	{
	count++;
	}
	else
	i++;
	}
	if(count==2)

printf("this is a prime number ");
else
printf("this is not a prime number");
}
else
printf("out of range");

}
