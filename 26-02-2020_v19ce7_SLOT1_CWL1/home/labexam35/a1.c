//v19ce7r2 Riky martin
#include<stdio.h>
main()
{
//menu to set a bit and to display the status
char c;printf("enter a character  a.to check status  b.to set\n");scanf("%c",&c);
int i=10,p;printf("enter a position \n");scanf("%d",&p);
switch(c)
{
case 'a':if((i>>p)&1==1)
         printf("its is a set bit\n");
         else
         printf("its not a set bit\n");
         break;
case 'b':if((i>>p)&1==1)
         printf("its aldeady set\n");
         else
         printf("the bit is set and the new no is %d\n",i=i|(1<<p));
         break;  
default:printf("none of the above\n");


}

}
