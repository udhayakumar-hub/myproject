/* Name   karthikeyan
vector id v19ce7k10 */

#include<stdio.h>
int main()
{
int num,i,count;
for(num=5000;num>=1000;num--)
{
for(i=2,count=0;i<=num;i++)
{
	if(num%i==0)

	{
	break;
	count++;
	}

if(count==1)
{
printf("%d\n",num);
sleep(1);
}

}
}
}
