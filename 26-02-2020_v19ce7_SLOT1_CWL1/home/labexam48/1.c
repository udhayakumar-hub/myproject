#include<stdio.h>
int main()
{
int num,pos,b;
printf("Enter a number and pos\n");
scanf("%d %d",&num,&pos);


printf("Enter the options 1 for complementing and 2 for clearing\n");
scanf("%d",&b);


switch (b)
   {

     case 1 : num=num^1<<pos;
              printf("Number after complementing %d\n",num);
     case 2 : num=num|1<<pos;
              printf("Number after clearing a bit is %d\n",num);    
             
    }
}
