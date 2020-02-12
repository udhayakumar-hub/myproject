/* Name;   E.Balamurugan
vector id: v19ce6b1*/
#include <stdio.h>
int main()

{
 int n,rem,b=0,sb=0;
 printf("enter the digit:\n");
 scanf("%d",&n);
 while(n!=0)
 {
 	rem=n%10;
	n=n/10;
	if((rem >sb)&&(sb<b))
       sb=rem;
	if (rem>b)
        {
	b=rem;
	}
	}
	printf("highest no=%d  second highest no=%d\n",b,sb);

}
