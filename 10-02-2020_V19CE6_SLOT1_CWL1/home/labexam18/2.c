//Name:N.Hari
//batch no:v19ce6n2
#include<stdio.h>
int main()
{	
	int i=1,n,r;
	for(n=1;n<=10;n++)
	{    i=1;
		label:
		 	r=n*i;
			printf("%d * %d =%d\n",n,i,n*i);
			i++;
			if(i<=10)
			goto label;
			
	}
}
			
