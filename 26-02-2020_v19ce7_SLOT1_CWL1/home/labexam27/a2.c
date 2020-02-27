//dhara kothiya id:v19ce7k5
#include<stdio.h>
int main()
{
int n,op,i,l,pos;

printf("enter the number\n");
scanf("%d",&n);
 
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

      
printf("enter the option (1 is for set a bit or 2 is forstatus of particular bit )\n");
scanf("%d",&op);
printf(" enter position value");
scanf("%d",&pos);

switch(op)
{
 case 1:n=n^(1<<pos); break;
 case 2:n=(n>>pos)&1; break;

}
if(op==1)
{
        printf("now number is ");
          for(i=31;i>=0;i--)
          printf("%d",n>>i&1);
}
else
{  
if(n==0)
printf("bit is clear\n");
else
printf("bit is set\n");
}

printf("\n");
}
