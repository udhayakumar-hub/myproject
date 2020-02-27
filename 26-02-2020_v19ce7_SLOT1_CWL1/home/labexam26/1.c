/* Name  : Nirmal.m 
   Batch id: v19ce7n1
*/
#include<stdio.h>
int main()
{
int op,num,pos,i;
printf("Enter the number\n");
scanf("%d",&num);
printf("Enter the position to clear or compliment\n");
scanf(" %d",&pos);
printf("Choose the option 1 or 2\n 1.Clear\t2.compliment\n");
scanf(" %d",&op);
printf("Before changing\n");
for(i=31;i>=0;i--)
printf("%d",1&(num>>i));
printf("\n");
switch(op)
{
case 1:num=num&(~(1<<pos));break;
case 2:num=num^(1<<pos);break;
default : printf("Invalid option");break;
}
printf("After changing\n");
for(i=31;i>=0;i--)
printf("%d",1&(num>>i));
printf("\n");
}


