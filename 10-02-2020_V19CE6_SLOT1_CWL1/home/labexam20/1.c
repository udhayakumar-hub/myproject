//Ashil shaji,v19ce6a3
#include<stdio.h>//
int main()
{
int a,n,x,count,c=0;
printf("enter the number:");
scanf("%d",&n);//123
for(count=1;n!=0,count<2;)
{
while(count==1)
{
a=n%10;
count++;
if(count>1)
n=n/10;
break;
}
if(a>c)
c=a;
printf("%d\n",c);//highest number in a integer
}
}

