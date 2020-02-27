/* NAME: GOPI K
   ID  : V19CE7G1
MENU BASED SET A PARTICLUAR BIT */

#include<stdio.h>
int main()
{
int op,i,n,pos;
printf("enter the num\n");
scanf("%d",&n);
for(i=31;i>=0;i--)
{
printf("%d",n>>i&1);
}
printf("enter the op and pos\n");
scanf("%d %d",&op,&pos);
switch(op)
{
case1:printf("%d",n&~(1<<pos));
}}

