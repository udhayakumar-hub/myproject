//NAME:K.GOMATHI
//VECTOR ID:V19CE7K11
#include<stdio.h>//header file//
#include<math.h>
main()
{
int n,i=2,sq,count=0;
for(n=5000;n<10000;n++)// to the limit//
{
for(n=5000;count!=10000;n++)
{
sq=sqrt(n);
i=2;
while(i<=sq)//checking the condition//
{
if(n%i==0) //taking the remainder value of the number//
break;
i++;
}
count++;
if(count==3)
if(i==sq+1)//checking it is equal ar not of the count//
printf("%d",n);
printf("\n");
}
}
}


