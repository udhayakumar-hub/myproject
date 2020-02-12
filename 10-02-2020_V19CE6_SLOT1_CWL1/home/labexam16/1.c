//sathiya v19ce6s9
#include<stdio.h>
int main()
{
int n1,r,s=0;
printf("Enter the integer\n");
scanf("%d",&n1);
for(;n1!=0;)
{
r=n1%10;
printf("numbers=%d\n",r);
if(s>=r)
printf("lowest number:%d\n",r);
s=r;
n1=n1/10;
}
printf("result=%d\n",r);
}
