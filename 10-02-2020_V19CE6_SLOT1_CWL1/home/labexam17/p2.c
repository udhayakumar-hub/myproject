//santhosh kumar v19ce6s7
#include<stdio.h>
int main()
{
  int x,y,z;
printf("entre the value\n");
scanf("%d%d%d",&x,&y,&z);
if((x>y)&&(x>z))
  printf("x is greater\n");
else if((y>x)&&(y>z))
printf("y is greater\n");
else if((z>x)&&(z>y))
printf("z is greater\n");
}
