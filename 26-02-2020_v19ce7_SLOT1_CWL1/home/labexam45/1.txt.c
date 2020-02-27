#include<stdio.h>
int main()
{
int n,i=1,count=0;
printf("enter the num:\n");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
count=count++;
i++;
}
if(count==2)
printf("prime number\n");
else
printf("Not a prime number\n");


}


