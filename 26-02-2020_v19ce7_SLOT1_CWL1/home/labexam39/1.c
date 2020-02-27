/* Name : K.Mohamed Mustaffa
 vector id : v19ce7m3 */
#include<stdio.h>
int main()
{

int n=10,pos=4,i=10;

switch(i)
{
case 10 : printf("status of particular bit n=10,pos=4\n");
case 11 : (n|(1<<pos))?puts("set"):puts("not set");
default : break;
}
}

