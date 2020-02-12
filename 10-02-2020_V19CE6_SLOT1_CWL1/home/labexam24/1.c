//Name:N.Prasanna Venketeshan,Batch ID:v19ce6p1//
#include<stdio.h>
int main()
{
int i,n,s1,r,i1,i2,i3;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;n!=0;i++)
{
r=n%10;
if(i==1)
i1=r;
else if(i==2)
i2=r;
else if(i==3)
i3=r;
n/=10;
}
if((i1<i2)&&(i1<i3))
s1=i1;
else if((i2<i1)&&(i2<i3))
s1=i2;
else if((i3<i1)&&(i3<i2))
s1=i3;
if(s1==i1)
{
if(i2<i3)
printf("\nSecond smallest digit is %d",i2);
else
printf("\nSecond smallest digit is %d",i3);
}
if(s1==i2)
{
if(i1<i3)
printf("\nSecond smallest digit is %d",i1);
else
printf("\nSecond smallest number is %d",i3);
}
if(s1==i3)
{
if(i1<i2)
printf("\nSecond smallest number is %d",i1);
else
printf("\nSecond smallest number is %d",i2);
}
printf("\n");
}

