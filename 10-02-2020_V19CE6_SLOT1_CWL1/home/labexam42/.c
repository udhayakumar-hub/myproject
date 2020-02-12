/*
NAME:NIRMAL RAGAVAN R
VECTOR ID:V19CE6N3
*/
#include<stdio.h>
int main()
{
int a,b[20],rem=0,i=0,c;
printf("enter the integer");
scanf("%d",&a); //input value for a
while(a!=0)
{
rem=a%10;
b[i]=rem;
a/=10;
i++;
}
for(c=0;c<i;c++)
{
printf("%d",b[c]);
}
}

