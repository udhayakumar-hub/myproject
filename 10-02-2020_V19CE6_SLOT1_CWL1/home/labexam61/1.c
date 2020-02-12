// V19ce6r5
//Arunpandi
#include<stdio.h>
void main()
{
int n,r,temp,p,n1,r1=0,r2=0;
printf("enter the integer\n");
scanf("%d",&n);
temp=n1=n;
while(n!=0)
{
r=n%10;
if(r>r1) r1=r;
n=n/10;
}
while(n1!=0)
{
p=n1%10;
if(p>r2 && p!=r1) r2=p;
n1=n1/10;
}
printf("the second biggest number is %d \n",r2);
}
