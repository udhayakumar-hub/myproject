/*
v19ce5a7*/

#include<stdio.h>
int main()
{
int a[10];
int n,i=0,j,r1,r2,s1,s2;


printf("enter the no;\n");
scanf("%d",&n);
s1=n%10;r1=n%10;n=n/10;//r2=n%10;n=n/10;
while(n!=0)
{
r2=n%10;
if(s1<r2)
{
s2=s1;
s1=r1;
}
else if(r2<s1) {
s2=s1;
s1=r2;}
else if(r2<s2){
s2=r2;}
//r2=r1;
//s2=r1;

n=n/10;

//printf("%d\n",d);
//printf("%d\n",i);




}
//for(j=0;j<i;j++)
printf("%d\n",s2);
}



