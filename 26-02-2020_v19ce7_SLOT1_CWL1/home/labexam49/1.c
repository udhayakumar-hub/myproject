
/* 
   Name:Jayashree.M
   
   ID:v19ce7j3

   lab exam date:26/2/2020
*/
//1.b write a program to print number between 5000 to 1000 whose last digit is 3




#include<stdio.h>
#include<math.h>
int main()

{
int i,n,sq;
for(n=5000;n>=1000;n--)
{
sq=sqrt(n);
i=2;
while(i<=sq)
{
if(n%i==0)
break;
i++;
}
if(i==sq+1)
{
if(n%10==3)
printf("%d\t",n);
}
}
}
