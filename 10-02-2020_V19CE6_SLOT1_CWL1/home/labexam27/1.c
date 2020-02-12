#include<stdio.h>
int main()
{
int n,s,r,q;
printf("enter the number");
scanf("%d", &n);
while(n!=0)
{
	r=n%10;
	s=r;
	q=s;
	n=n/10;
	printf("%d\n", r);
	printf("%d\n", s);
	printf("%d\n", q);

	if ((q>r)&&(q>s) )
{

	printf( "%d", q);
}
	else if( (r>q)&&(r>s) )
{	printf("%d", s);}
	else if( (s>r)&&(s>q) )
{ 	printf("%d", s);}
}
}

