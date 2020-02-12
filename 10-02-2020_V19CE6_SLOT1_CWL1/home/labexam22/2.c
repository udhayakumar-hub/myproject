//Name: Chandrasekar M
//Batch: V19ce6c1

/*    multiplication table   */

#include<stdio.h>
#include<math.h>
int main()
{
unsigned int i,j,r;
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{
r=i*j;
printf("%d=%d*%d\n",i,j,i*j);

}
printf("\n \n");
}
}

/*#include<stdio.h>
int main()
{
int i,n,r,s=0;
printf("enter the n\n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
break;
}
if((s<r)&&(s>r))
{
printf("%d",s);
}
}*/
