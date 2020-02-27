//S.AKILESHWARAN
//V19CE7A3
//ANSWER FOR 1-a
#include<stdio.h>
int main()
{
int n,p,a,b;
char s;
puts("enter the num");
scanf("%d",&n);
puts("to SET a bit ,enter bit positon");
scanf("%d",&a);
//puts("to show the ststus of the bit ,enter 's'\n");
//scanf("%c",&c);

switch(1)
{
default: for(p=31;p>=0;p--)
	printf("%d",(n>>p)&1);
case 'b':(n>>a)|1;printf("\n");
case 's':for(p=31;p>=0;p--) 
	printf("%d",(n>>p)&1);break;

				
}
printf("\n");




}
