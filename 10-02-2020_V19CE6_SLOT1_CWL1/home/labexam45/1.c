//P.kotteswaran
//V19CE6P3
#include<stdio.h>
int main()
{
int n,i,b=0,b1=0,r;
printf("Enter the number:");
scanf("%d",&n);
for(;n!=0;)
{
r=n%10;
if(b<r)
{
b1=b; 
b=r;
}
else if((b>b1)&&(b1<r)&&(b!=r)) 
b1=r;
n/=10;
}
printf("Second biggest number is: %d ",b1);
}
