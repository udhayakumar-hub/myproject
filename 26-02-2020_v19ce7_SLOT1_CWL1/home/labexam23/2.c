/*NAME: GOPI K
  ID  : V19CE7G1 */
//prime number bw 5000 to 2000  PROGRAM


#include<stdio.h>
int main()
{
int c=0,n,j,i;
printf("enter the number\n");
scanf("%d",&n);


for(i=n;i>2000;i--)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{
c++;
}
break;
}
if(c==2)
printf("%d",i);
}
printf("\n");
}

