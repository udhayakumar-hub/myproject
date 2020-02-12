
//M.Anusha
//v19ce6m3

#include<stdio.h>
int main()
{
int r1,r2=0,r3=0,r4=0,n;
printf("Enter the integer\n");
scanf("%d",&n);
while(n!=0)
{
r4=n%10;
n=n/10;
r3=r2;
r2=r1;
r1=r4;
}
if((r1>r2)&&(r2>r3))
printf("sh=%d\n",r2);
else if((r3>r2)&&(r2>r1))
printf("sh=%d\n",r2);
else if((r2>r3)&&(r3<r1))
printf("sh=%d\n",r3);
else if((r1>r3)&&(r3>r2))
printf("sh=%d\n",r3);
else if((r1==r3)&&(r2>r1))
printf("sh=%d\n",r1);
else if((r2==r3)&&(r2>r1))
printf("sh=%d\n",r1);
else if((r1==r3)&&(r3>r2))
printf("sh=%d\n",r2);




else if((r2>r1)&&(r1>r3))
printf("second highest=%d\n",r1);
else if((r3>r1)&&(r1>r2))
printf("second highest=%d\n",r1);
else if((r1==r2)&&(r2<r3))
printf("second highest=%d\n",r2);
else if((r2==r3)&&(r2<r1))
printf("second highest=%d\n",r2);
else if((r1==r3)&&(r3<r2))
printf("second highest=%d\n",r1);
//else
//printf("all are equal\n");







}
