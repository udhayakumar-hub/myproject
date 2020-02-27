//S.PRAVEEN
//V19CE7P1 

#include<stdio.h>
int main()
{
int i,r,n,s;
for(i=2000;i<5000;i++)
{
n=i;
s=0;
while(n>0)
{
r=n%10;
s=r+(s*10);
n=n/10;
}
if(s==i)
printf("%d ",i);
}}

