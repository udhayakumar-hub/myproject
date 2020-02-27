/*Name: Suresh.T
  Vector ID : V19CE7S3
  Date : 26-Feb-20
  progam to print the palindrome numbers between 2000 to 5000
*/

#include<stdio.h>
int main()
{
int num,r,res=0, temp;
//printf("enter the values of num\n");
//scanf("%d",&num);
for(num=2000;num<=5000;num++)
{
temp=num;
while(temp!=0)
{
r=temp%10;
res=res*10+r;
temp=temp/10;
} 
if(num==res)
printf("%d\n",num);
}
}

