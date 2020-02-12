#include<stdio.h> //gayathri //v19ce6g2
int main()
{
int i,n;
for(n=1000;n>1;n--)
{
for(i=2;i<n;i++)
     {
       if(n%i==0)
       i++;
       break;
     } 
if(n%10==1)
printf("%d",i);
}
printf("\n");
}




