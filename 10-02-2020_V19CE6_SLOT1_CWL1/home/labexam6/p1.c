/*name:Tamilarasi.A
batchid:v19ce6t1*/

#include<stdio.h>
int main()
{
int n,n1,n2,n3,n4,n5,n6;
printf("enter the n value\n");
scanf("%d",&n);
n1=n%100;
n2=n1/10;
n3=n2/1;
n4=n1%10;
n5=n/100;
printf("second lowest number  %d %d %d %d %dn",n1,n2,n3,n4,n5);
printf("smallest num %d",n4);
}
