/* K.Karthick  v19ce7k9*/
#include<stdio.h>
int main()
{
int num,pos,op;
printf("enter the n value \n");
scanf("%d",&num);
printf("enter the pos value \n");
scanf("%d",&pos);
printf("enter the option\n");
scanf("%c"&op);



switch(1)
{
case '1': num=num&(1<<pos);
	  printf("%d",num);break;
          
case '2':num=num^(1<<pos);
	printf("%d",num);break;
default:printf("%d",num);

}
}
