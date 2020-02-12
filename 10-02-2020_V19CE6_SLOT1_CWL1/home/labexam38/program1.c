//v19ce6p5  p.Likhitha
#include<stdio.h>
main()
{
int n,x,y,z;
printf("Enter the Three digit number:\n");
scanf("%d",&n);
x=n%10;
n=n/10;
y=n%10;
n=n/10;
z=n%10;
n=n/10;
if((x<y)&&(x>z))
printf("The second smallest number=%d",x);
else if((y<x)&&(y>z))
printf("The second smallest number =%d",y);
else if((z<x)&&(z>y))
printf("The second smallest number =%d",z);
printf("\n");
}
