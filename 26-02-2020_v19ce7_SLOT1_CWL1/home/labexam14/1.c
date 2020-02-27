//menu based program to clear a particular bit and compliment a particular bit
#include<stdio.h>
int main()
{
int num,pos;

printf("enter the values num and pos\n");
scanf("%d%d",num,pos);
char op;
printf("enter the charachter 'c'to clear or 'C' to compliment\n");

scanf("%c",op);

switch(1)
{
case 1:if((op='C'))
       {
       num=num^(1<<pos);
       printf("%d",num);
}
case 2:if(op='c')
{
       num=num&~(1<<num);
       printf("%d",num);
 }
break;     
}
}
