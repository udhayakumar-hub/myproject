//Name:Athul P   Batch ID :V19CE6A2
#include<stdio.h>         //to include the header file
int main()                //main function
{
int n,i;                 //integer variables n for number and i for loop iterations
for(n=1000;n>=1;n--)     //for reading numbers from 1000 to 1
{
  for(i=2;i<n;i++)       //checking for divisors of the number
  {
  if(n%i==0)
    break;               //if divisor is found,exit from loop
  }
   if(n==i)              //condition for prime number
    {
   if(n%10==1)          //finding numbers ending with 1
     printf("%d\n",n);   //printing of numbers
    }
}
}
