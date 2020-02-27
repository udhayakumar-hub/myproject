/* NAME:T.Jessilin Percis
   BATCH:V19ce7t1 */
/* Write a menu based program to clear a particular bit and compliment of particular bit */


#include<stdio.h>
int main()
{
int ch,num,pos,i;
printf("Enter the number \n");
scanf("%d",&num);
printf("Enter the position of the bit \n");
scanf("%d",&pos);
printf("Enter the option \n 1.clear a particular bit  \n  2.compliment of particular bit \n ");
scanf("%d",&ch);
switch(ch)
{
case 1:
      num=num&~(1<<pos);
      printf("%d ",num);

      break;
case 2:
     num=num^(1<<pos);
     printf("%d ",num);
     
      break;
default:
     printf("NO OPTION \n RETRY....");
     break;
}
}

