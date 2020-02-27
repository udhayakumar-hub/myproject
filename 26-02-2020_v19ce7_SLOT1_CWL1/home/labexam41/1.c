//name:K.GOMATHI
//VECTOR ID:V19CE7K11
#include<stdio.h>//header file//
main()
{
int num,i,pos,option;
printf("enter the  particular bit is set or not1.binary format 2.set the bit\n");
scanf("%d%d",&num,&pos);
switch(option)
{
case 1:for(i=31;i>=0;i--) //to print the binary format//
       printf("%d",num>>i&1);
       break;
case 2:num=num | (1<<pos);//to set the bit//
       printf("%d",num);
       break;
default :for(i=31;i>=0;i--)
         printf("%d",num>>i&1);
         printf("display the set the number\n");//again display the binary number//
         break;
}
}

