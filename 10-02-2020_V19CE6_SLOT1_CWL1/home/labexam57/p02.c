//M.anusha
//v19ce6m3
#include<stdio.h>
int main()
{
intm=1, n,j=0;
for(n=1000,n<=1000,n--)
{
while(n!=0)
{
if(n%m==0)
{
j++;
}
m++;
}
if((j==0)&&(n!=1))
printf("prime number=%d\n",n);
}

}
