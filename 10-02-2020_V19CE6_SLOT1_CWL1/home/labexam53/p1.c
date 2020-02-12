/* Name : Ilangovan Bhanupriya
   ID   : V19CE6I1
*/
#include<stdio.h>
int main()
{
  int i,n,r,big1,big2,a,b;
  printf("Enter the number:\n");
  scanf("%d",&n);
  for(i=1;n!=0;i++)
  {
    a=n%10,n=n/10;
    b=n%10,n=n/10;
    if(a!=b)
    {
      if(a>b)
       {
       big1=a;
       big2=b;
       break;
       } 
     
       else
       {
         big1=b;
         big2=a;
         break;
       }
    }
    else if(a==b)
    {
       n=n*10+b;
    }
  }  
  for(i=0;n!=0;i++)
  {
    r=n%10;
    if(big1<r)
       big1=r;
    if((big2<r)&&(big1!=r))
       big2=r;
    n=n/10;
  }
   
  printf("2nd Highest number: %d \n",big2);
}

  
