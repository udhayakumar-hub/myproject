//#v19ce5N1
//#Navya Rajendran

#include<stdio.h>
int main()
{
int n,r,b1=0,b2;
printf("enter the n value\n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
n=n/10;
if(r>b1)
{
b2=b1;
b1=r;
}
else if(r>b2)
b2=r;
}
printf("%d\n",b2);
}
