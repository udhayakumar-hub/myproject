//k.krishnasaandeep v19ce7k1//

#include<stdio.h>
int main()
{
	int num,pos,o=1;
	printf("enter the num and pos");
	scanf("%d %d",&num,&pos);

	switch(o)
	case 1: num&(1<<pos);
		break;
	case 2: num^(1<<pos);
		break;
	printf("num is set");
}
	
