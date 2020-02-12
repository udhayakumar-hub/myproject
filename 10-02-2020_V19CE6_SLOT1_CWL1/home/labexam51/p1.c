/* Author : v19ce6s6 */
#include<stdio.h>
int main()
{
	int num,count=0,b1,b2,temp,num_bkp,j;
	printf("Emter the number\n");
	scanf("%d",&num);
	num_bkp = num;
	do
	count++;while(num_bkp/=10);
	num_bkp = num;
	//for(i=0;i<count;i++)
	//{
	b1 = num%10;
	num/=10;
		for(j=0;j<count-1;j++)
		{
			temp=num%10;
			num/=10;	
			if(temp>b1)
			{
				b2 = b1;
				b1 = temp;
			}
			else if(temp<b1)
			{
				if(b2<temp)
				b2 = temp;
			}	
		}
		printf("%d\n",b2);

	
}
