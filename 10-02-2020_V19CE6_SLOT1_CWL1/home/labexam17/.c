//v18ce1s7
//shubham sharma
#include<stdio.h>
int main()
{
char a[30];
int i,j,k,l,h,t;
printf("enter string\n");
gets(a);
for(i=0;a[i];i++)
{
if(a[i]>=48&&a[i]<=57)
{
for(j=i,k=0;(a[j]>=48&&a[j]<=57);j++,k++);
for(l=i,h=k;h>l;l++,h--)
{
t=a[l];
a[l]=a[h];
a[h]=t;
}
}


}
printf("%s",a);


}
