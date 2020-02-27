#include<stdio.h>
#include<math.h>
/*int main()
{
int i,j,sq;
for(i=5000;i>=1000;i--)
{
sq=sqrt(i);
j=2;
if(j<=sq)
{
break;
j++;
}
}if(j==sq+1)
printf("%d",j);
}
*/



int main()
{int n,i=2,j,sq;
printf("enter the no\n");
scanf("%d",&n);
//for(;n<5000;)
{
sq=sqrt(n);
while(i<=sq)
{
if(n%i==0)
{
break;
i++;
}
if(i==sq+1)
//if(i%10==3)
printf("p %d \n",n);
else printf("not\n");
//n++;
}
}
}
