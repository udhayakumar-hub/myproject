/* Name:JAYASHREE M
   
   Vector id:v19ce7j3
   
*/

//1.a) write a menu based program to set a particular bit and to know the status of particular bit?


#include<stdio.h>
int main()
{
int num,i;
int bit;
char op;

printf("select the menu \npress 1.set a particular bit \npress 2.check status of the bit\n");
scanf("%c",&op);


switch(op)
{
case'1':printf("enter the number\n");
        scanf("%d",&num);

       for(i=31;i>=0;i--)
       printf("%d",(num>>i&1));
printf("\n");

       printf("enter the bit to be set\n");
       scanf("%d",&bit);
      
       num=num|(1<<bit);
      
       for(i=31;i>=0;i--)
       printf("%d",(num>>i&1));
 printf("\n"); 

// printf("\n do you want to continue yes or no (y/n)?\n");
       break;
case'2':
        printf("enter the number\n");
        scanf("%d",&num);
       for(i=31;i>=0;i--)
       printf("%d",(num>>i&1));
printf("\n");
       
       
       printf("enter the bit to check its status\n");
       scanf("%d",&bit);
     ( (num>>bit)&1)==0?puts("bit is clear"):puts("bit is set");

 //printf("\n do you want to continue yes or no (y/n)?\n");
break;
default:printf("enter a valid option\n");
 printf("\n do you want to continue yes or no (y/n)?\n");
}

}
