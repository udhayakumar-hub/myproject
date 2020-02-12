#include<stdio.h>
int main()
{                                           //K.Dhinesh kumar  V19CE6D2
int n,a,b,c;
printf("Enter the number\n");
scanf("%d",&n);
a=n%10; n=n/10;
b=n%10; n=n/10;
c=n%10; n=n/10;
if((a<b)||(a<c))
{
if(b<c)
printf("%d is lowest\n",b);
else if (c<b)
printf("%d is lowest\n",c);
}
if((b<a)||(b<c))
{
if(a<c)
printf("%d is lowest\n",a);
else if (c<a)
printf("%d is lowest\n",c);
}
if((c<a)||(c<b))
{
if(a<b)
printf("%d is lowest\n",a);
else if (b<a)
printf("%d is lowest\n",b);
}
}
  
