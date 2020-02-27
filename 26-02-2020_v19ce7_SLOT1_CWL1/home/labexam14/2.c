//2.program to print palindrome sequences between 2000 to 5000
#include<stdio.h>
int main()
{
int n,rev,r,i=2000;

for(i=2000;i<=5000;i++)
{
n=i;
rev=0;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
}
if(i==rev)
printf("%d",i);
{
printf("\n");
}
}
