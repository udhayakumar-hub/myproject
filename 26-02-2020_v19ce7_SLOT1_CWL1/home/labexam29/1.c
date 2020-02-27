//v19ce4d3
//dharshen
//1)b. prime numbers

#include<stdio.h>
main()
{
   int i,j,c,r=0;
   for(i=5000;j=1000;i--)
   {
     for(i=2;i<j;i++)
       if(i%j==0)
         break;
         if(i==j)
         {
            c++;
            r=i%10;
            if(i==3)
             printf("%d",i);
          }
    }
}
