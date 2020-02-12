//Divya Susan Jose
//v19ce6d4
#include<stdio.h>
int main()
{
int m,n,r,r1,p,s,q,t;
printf("Enter the number");
scanf("%d",&n);
m=n;
p=n%10;
while(n!=0)
{
r=n%10;
s=r;
if(s<p)
p=s;
n=n/10;


}
printf("lowest number=%d\n",p);
n=m;
q=n%10;
while(n!=0)
{
r1=n%10;
t=r1;
if((t<q)&&(t>p))
q=t;
n=n/10;
}
printf("Second lowest number is %d\n",q);
}

