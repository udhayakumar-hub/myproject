#include<stdio.h>// abinesh.s v19ce6a5
int main()
{
int i,n,r=0;
i=2;
for(n=1000;n>=0;)
{
	while(n!=0)
{	
	if(n%i==0)
	r=i;
printf("%d", r);
	break;
	i++;
}
	n--;
	if(r==n)
	printf("%d",n);
//printf("prime");
//else
//printf("not prime");
}
}
//	printf(" 1\n");
//	printf(" %d",n);


/*{
int a;
for (a=1000;a>=0;a--)
printf("%d",a);
}
*/

