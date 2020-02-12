#include<stdio.h>
int main()
{
int n,x,y,z;
printf("Enter the integer n:\n");
scanf("%d",&n);

if(n!=0)
{ 
 x=n%10;    //x,y,z be first second and third integer
 n=n/10;
 y=n%10;
 n=n/10;
 z=n%10;
 n=n/10;
}
if((x>y)&&(z>y))
printf("y is smaller\n");

else if((y>x)&&(z>x))
printf("x is smaller\n");

else if((x>z)&&(y>z))
printf("z is smaller\n");

else
printf("Invalid\n");

{
printf("The x,y &z values are: %d %d %d",x,y,z);
}
}


