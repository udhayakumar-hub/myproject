/* Name : K.Mohamed Mustaffa
 vector : v19ce7m3 */
#include<stdio.h>
int main()
{
int n,i,c;
for(n=5000;n>=1000;n--)
{
i=2;
while(i<=n/2)
{
c=0;
if(n%i==0)
{
c++;
break;
}
i++;
}
if(n%10==3)
{
if(c==0)
{
printf("%d ",n);
}
}
}
printf("\n");
}
