// Name:       Ajay Hovarthan
// Batch id:   v19ce7a8
// Question: Set and Complement a particular bit in a menu based program

#include<stdio.h>
int main()
{
int n,b,op ;
printf("Enter the number \n");
scanf("%d",&n);
printf("select the bit to set or clear\n");
scanf("%d",&b);
printf("Enter 1 to set the bit 2 to complement the bit\n");
scanf("%d",&op);
switch(op)
{
case 1: n=n|(1<<b);break;
case 2: n= n^(1<<b);break;
default :printf(" select the correct option; break");
}
printf("The result %d\n",n);
}



