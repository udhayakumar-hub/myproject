// V19ce6r5
//Arunpandi
#include<stdio.h>
void main()
{
int n,i,r;
printf("prime number between 1000 to 1 and with 1\n");
for(n=1000;n>=1;n--)
{
for(i=2;i<n;i++)
if(n%i==0) break;
if(i==n) 
{
 r=n%10;
 if(r==1) printf("\t %d \n",n);
}
}
}
