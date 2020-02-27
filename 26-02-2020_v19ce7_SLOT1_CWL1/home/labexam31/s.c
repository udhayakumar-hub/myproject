

#include<stdio.h>
int main()
{
int a,i,j,m,n,num,pos;
scanf("%d",&a);
switch (a)
{
case 1: printf("the programme for set a particular bit\n");
       printf("enter the number\n");
       scanf("%d",&m);
       for(i=31;i<=0;i--)
       {
        printf("%d",m=(m)&(1<<i));
       }
      printf("enter the position ");
      scanf("%d",&pos);
      num = m | (1<<pos);
      printf("the number after setting the bit is %d\n",num);
       break; 





















case 2: printf("to know thw status ");
        printf("enter the number ");
        scanf("%d",&n);
        for(i=31;i<=0;i++)
        {
         printf("%d",n=n&(1<<i));
        }
        printf("enter the position ");
        scanf("%d",&pos); 
        num = (num >> pos) &1?printf("1"):printf("0");
        

 


        break;

}

} 
