/*name: R.Keerthiga
vector id: v19ce7r1*/

#include<stdio.h>
int main()
{
int n,rev,r,t;
for(n=2000;n<=5000;n++)
{
t=n,rev=0;
while(t>0)
{
r=t%10;
rev=rev*10+r;
t=t/10;
}
t=n;
if(rev==t)
printf("%d\n",t);
}
}

