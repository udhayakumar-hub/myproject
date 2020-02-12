//Name:Athul P Batch ID :V19CE6A2
#include<stdio.h>             //to include the header files
int main()                    //main function
{
 int n,n1,n2,big,big2,r;      //integer variables are declared
 printf("enter a number\n");  //for reading a number at run time
 scanf("%d",&n);              
 n1=n2=n;                     //copying the number to n1 and n2
 big=n1%10;                   // assume last digit is big
 n1=n1/10;
  while(n1!=0)                // loop for finding the biggest by comparing it with each digit
   {
   r=n1%10;                   //for getting last digit
   if(r>big)
   big=r;                     //if digit is bigger than big means interchange them
   n1=n1/10;            
   } 
        label:
        big2=n2%10;           //again assume second biggest is last digit
        if(big2==big)         //if the biggest digit repeat means skip that and go for second last digit and so on
        {
         n2=n2/10;
         goto label;
        }
        while(n2!=0)          //loop for finding second biggest one
        {
        r=n2%10;
           if(r!=big)         // skip the biggest one from comparison
           {
            if(r>big2)
              big2=r;
           } 
        n2=n2/10;
        } 
 printf("big2=%d\n",big2);   //printing result
}
