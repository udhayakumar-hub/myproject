/* JINCY C A
   V19CE7JI*/
#include<stdio.h>
int main()
{
int num,op,pos;
printf("ENTER THE OPERATION [(1)set or (2)check the status]\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("ENTER THE NUMBER\n");
       scanf("%d",&num);
       printf("ENTER THE POSITION\n");
       scanf("%d",&pos);
       num=num|(1<<pos);
       printf("THE NUMBER=%d\n",num);
       break;
case 2:printf("ENTER THE NUMBER\n");
       scanf("%d",&num);
       printf("ENTER THE POSITION\n");
       scanf("%d",&pos);
       ((num>>pos)&1)?puts("SET\n"):puts("CLEAR\n");
       break;
default:printf("INVALID OPERATION\n");
}
}
       
       
