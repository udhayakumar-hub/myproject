/* Name: Ilangovan Bhanupriya
   ID  : V19CE6I1   */
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1000;i>1;i--)
  {
     for(j=2;j<i;j++)
     {
        if(i%j==0)
        break;
     }
     if(j==i)
     {
       if(i%10==1)
       printf(" %d  ",i);
     }
  }
} 
