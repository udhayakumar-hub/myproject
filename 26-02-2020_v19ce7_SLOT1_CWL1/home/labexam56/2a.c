/* NAME : R SAJAIKUMAR;
   ID    : V19CE7S10;
  PROG   : SET A BIT AND COMPLEMENT A BIT */

 
 #include<stdio.h>
 int main()
 {
   int n1,n2,op,n,i,pos;
   printf("enter the number \n");
   scanf("%d",&n);
   printf(" 1 CLEAR A BIT \n");
   printf(" 2 COMPLIMENT A BIT \n");
   printf("enter your option \n");
   scanf("%d",&op);
   
   switch(op)
   {
     case 1: printf("before clear\n");
             n1=n;
             n2=n; 
             for(i=31;i>=0;i--)
             printf("%d ",1&(n1>>i));
             
             printf("enter the position to clear the particular bit\n");
             scanf("%d",&pos);
             n2 = n & ~(1<<pos);
             for(i=31;i>=0;i--)
             printf("%d \n",1& (n2>>i);
            
             break;
     case 2:
             printf("before comliment\n");
             n1=n;
             n2=n;
             for(i=31;i>=0;i--)
             printf("%d ",1&(n1>>i)); 
             printf("enter the position to comliment a bit");
             scanf("%d",&pos);
              n2 = n ^ (1<<pos);
             for(i=31;i>=0;i--)
              printf("%d ",1&(n2>>i));
             break;
   






  default : printf("enter the correct option \n");





  }










 


 }  
