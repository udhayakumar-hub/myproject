// find second lowest integer
#include<stdio.h>
main()
{
int n,i,r,s=0,s1,s2,s3,s4;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++);
{
r=n%10;
s1=s+r;

}
n=n%10;
printf("second lowest integer=%d",n);
}

