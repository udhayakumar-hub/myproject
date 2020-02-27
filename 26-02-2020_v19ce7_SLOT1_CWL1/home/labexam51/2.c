// Name     : Sathgurunathan S
// Batch Id : V19CE7S8

#include<stdio.h>
#include<math.h>
int main()
{
int i,j,count=0,sq;

for(i=5000;i>=1000;i--)
{
sq=sqrt(i);
for(j=1;j<=i;j++)
	{
	count=0;	
	if(i%j==0)
	count++;

}
	
if(count==2)
{
if(i%10==3)
printf("%d ",i);
}

}

}

