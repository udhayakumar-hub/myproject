//S.PRAVEEN
//V19CE7P1
#include<stdio.h>
int main()
{
int n,n1,pos,n2;
printf("enter a input number\n");
scanf("%d",&n);
printf("which option u need\n 1.For clear a bit\n 2.For complement a bit\n");
scanf("%d",&n1);
printf("which bit u can clear or complement\n");
scanf("%d",&pos);
switch(n1)
{
case 1:printf("before clear=%d\n",n);
       n=n&~(1<<pos);
       printf("after clear=%d\n",n);break;
default :printf("before complement=%d\n",n);
       n=n^(1<<pos);
       printf("after complement=%d\n",n);break;
}
}

        
        
