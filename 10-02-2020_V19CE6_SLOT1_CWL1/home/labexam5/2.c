//balamurugan v19ce6b1

#include<stdio.h>
int main()
{
int n,a,i,j,c=0;
for(n=1000;n>0;n--)
{
  for(i=2;i<n;i++)
  {
  
  if(n%i==0)
{
c++;
 break;
 }
 }
if(i==n)
printf("%d ",n);

}
}




