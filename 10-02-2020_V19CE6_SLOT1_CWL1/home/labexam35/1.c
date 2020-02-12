#include<stdio.h>
main()
{
int n,a,b,c;
printf("enter n value");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
printf("the second biggest number in number is:\n");
if((a>b)&&(a>c))
{
if(b>c)
printf("%d",b);
else printf("%d",c);
}
else if((b>a)&&(b>c))
{
if(a>c)
printf("%d",a);
else printf("%d",c);
}
else if((c>a)&&(c>b))
{
if(a>b)
printf("%d",a);
else printf("%d",b);
}

printf("\n");
}
