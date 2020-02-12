//rakul.r
//v19ce6r1
#include<stdio.h>
int main()
{
 int n,i;
 for(n=1000;n>=1;n--)
    {
      for(i=2;i<=n;i++)
        {
            if(n%i==0)
            break;
        }
     if(n==i)
       
        printf("%d\t",n);
         
    }

}
