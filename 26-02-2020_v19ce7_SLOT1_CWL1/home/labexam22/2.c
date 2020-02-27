// anshif p k v19ce7a4
#include<stdio.h>
int main()
{
int n,i=1,rev=0,r;  
for(n=2000;n<5000;n++)
{
while(i<=n)
{
r=n%i;
rev=rev*10+r;
i++;
}
if(rev==n)
printf("%d",n);
}
printf("\n");
}
