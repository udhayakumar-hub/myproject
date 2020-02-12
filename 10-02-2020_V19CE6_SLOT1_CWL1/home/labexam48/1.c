// chiranjeevi.V   v19ce6c2//


#include<stdio.h>
int main()
{
int n=12345,i=0,j=0,a,small2,small1=0,temp=0;
temp=n;
small2=n+1;
while(temp!=0)
{
temp=temp/10;
j++;
}
temp=n;
//printf("%d\n",j);
small1=n%10;
for(i=0;i<j;i++)
{
a=temp%10;
if(small1>a)
small1=a;
temp=temp/10;
//printf("%d\n",small1);
}
for(i=0;i<j;i++)
{
a=n%10;

if((a!=small1)&&(small2>a))
small2=a;

n=n/10;
}
printf("%d\n",small2);
}




