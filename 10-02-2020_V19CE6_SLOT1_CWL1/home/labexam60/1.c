#include<stdio.h>
int main()
{
int r,n;
printf("enter the value:");
scanf("%d",&n);
abc:
r=n%10;
if(n!=0)
{
n=n/10;
goto abc;
}

}
