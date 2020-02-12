/* RajKumar.R v19ce6r4 */

#include<stdio.h>
int main()
{
int i=1,n=1000,c=0;
printf("enter the n value");
scanf("%d",&n);
while (i<=n)
{
if(n%i==0)
c++;
i++;
}
if(c==2)
printf("prime number");
else
printf("not prime number");
}
