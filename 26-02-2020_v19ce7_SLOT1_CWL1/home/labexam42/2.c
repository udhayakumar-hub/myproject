//Name Mahesh Manohar Gangurde 
// Vector ID V19CE7M8

#include<stdio.h>
int main()
{ 
int num,rev,temp,r,temp1;

	for (num=2000;num<=5000;num++)
	{
	  temp =num;
          temp1=temp;
	  rev = 0;
	  r = 0;

		while (num!=0)
	        {	
		  r =num %10;
		  rev =rev*10+r;
		  num =num/10;
  		}
	if (rev == temp)
	printf(" %d \n",temp1);
        }
printf("\n");
}
