//v19ce7r2 Riky martin
#include<stdio.h>
main()
{

//prime nos ending with 3 in between 5000 and 1000
int n,count,i,r;
for(n=5000;n>1000;n--)
{
i=1,count=0;r=n%10;
while(i<=n)
{
if(n%i==0)
count++;
i++;
}
if(count==2&&r==3)
printf("%d ",n);
}
}
