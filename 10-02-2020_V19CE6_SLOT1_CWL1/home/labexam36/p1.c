//Name : R.Naveen,Batch Id :v19ce6n1
#include<stdio.h>
int main()
{
int a,b,c,flag,r,n;
printf("Enter the three digit number\n");
scanf("%d",&n);
for(flag=3;n!=0;n=n/10,flag--)
{
r=n%10;
if(flag==3)
a=r;
if(flag==2)
b=r;
if(flag==1)
c=r;
}
if((a<b)&&(a<c))
{
if((b<c))
{
printf("%d is the second lowest",b);
}
else 
{
printf("%d is the second lowest",c);
}
}
else if((a==b)&&(b==c))
printf("No one is the second lowest");
else if((a!=b)&&(b<c))
{
printf("%d is the second lowest",c);
}
else
printf("%d is the second lowest",b);
printf("\n");
}



