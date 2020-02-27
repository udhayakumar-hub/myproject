#include<stdio.h>
int main()
{
int m , pos,n,num;
printf("enter the m  value:\n");
scanf("%d",&m);

printf("enther the num and pos\n");
scanf("%d %d",&num,&pos);


switch(m)
{
case 1:if(num=num^(1<<pos))
       printf("complient ");
break;
case 0:if(num=num&~(1<<pos))
       printf("clear bit");
       break;
default:printf("nothing to happen");
}
for(n=31;n<=0;n--)
{

 printf("%d",num>>pos);
}
}
