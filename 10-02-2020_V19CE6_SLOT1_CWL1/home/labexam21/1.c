//B.SANTHIYA - v19ce6s13
#include<stdio.h>
int main()
{
int n,x,a=0,b=0,c=0,r;
printf("Enter the number:\n");
scanf("%d",&n);
x=n;
while(n!=0)
{
r=n%10;
a=r;
if(a>b)
b=r;
n=n/10;
}
while(x!=0)
{
r=x%10;
a=r;
if((a>c)&&(a!=b))
c=r;
x=x/10;
}
printf("second highest digit is %d \n",c);
}
