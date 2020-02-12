//SURIYA S
//V19CE6S3

#include<stdio.h>
int main()
{
int s=0,r=0,b1,b2,n;
printf("Enter the value:\n");
scanf("%d",&n);

while(n!=0)
{
r=n%10;
b1=r;
n=n/10;
r=n%10;
if(b1>r) printf("big1:%d\n",b1);
else 
{
b2=r;
n=n/10;
r=n%10;
if(b2>r)
printf("second big:%d\n",r);

}
n=n/10;
}
}

