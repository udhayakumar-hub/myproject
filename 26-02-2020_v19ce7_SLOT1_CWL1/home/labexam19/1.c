/*
joice joseph
v19ce7j2
*/
#include<stdio.h>
int main()
{
int n,i,pos,x,k;
char h;
printf("enter the num and pos:\n");
scanf(" %d %d", &n, &pos);
printf("you want to set a perticular bit then press :'1' /you want to know status of a bit then press:'2'\n");
scanf(" %c", &h);
k=n;
switch(h)
{
	case '1':
		k=(k|(1<<pos));
		printf("the value is %d \n",k);
		printf("the binary is \n");
		for(i=31;printf("%d",(k>>i&1)),i>0;i--);
		printf("\n");
		break;		
	case '2':k=(n>>pos&1);
		if(k==1)
		printf("bit is set\n");
		else
		printf("bit is clear\n");
}
}
