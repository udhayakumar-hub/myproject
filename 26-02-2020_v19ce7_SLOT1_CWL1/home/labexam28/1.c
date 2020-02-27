//praveen
//v19ce7p2
#include<stdio.h>
int main()
{
char op
int x,n; 
scanf("%d %d",&x,&n);
switch(op)
{
 case 1:x=~(x);
          if(x=!x)
                printf("it is complement\n");
          else
                printf("non complement\n");
 printf("%d",x); //break;

 case 2:x=x+n;
         if(x&&n==1)
                printf("bit is set\n");
          else
                printf("bit is clear\n");
 printf("%d",x);
}
}
