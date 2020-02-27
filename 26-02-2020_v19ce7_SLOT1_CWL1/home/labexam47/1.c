//S.AKILESHWARAN
//V19CE7A3
//answer for 1-b
#include<stdio.h>
int main()
{
int n,i,j;
for(n=5000;n>=1000;n--)
{
i=1,j=0;
while(i<=n)
{
if(n%i==0)
j++;
i++;
}
if(j==2)
{
if(n%10==3)
printf("%d ",n);

}

}
}
