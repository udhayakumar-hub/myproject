/* NAME : R SAJAIKUMAR;
   ID   : v19ce7s10
   PROG : palindrome program between 2000 to 5000
*/


#include<stdio.h>
int main()
{ 
 int n,temp,m,sum=0,i;
 for(i=2000;i<5000;i++)
 {
 n= i;
 sum =0;
 while(n!=0)
 {
  m=n%10;
  sum = sum *10 + m;
  n=n/10;
 }
 
 if(i==sum)
  printf("%d is palindrome \n",i);
  
}
}
