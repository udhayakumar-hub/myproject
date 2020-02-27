//Name :      Ajay Hovarthan
//Batch Id:   v19ce7a8
//question :  palindrom number from 2000 to 5000

#include<stdio.h>
int main()
{

int i,n,r,s=0;
i=n;
for(n=2000;n<5000;n++)
{

 while(n!=0)
{

 r=n%10;
if(r==0)
n=r;
 s=s*10+r;
 n=n/10;
 

}
if(s==i)
printf("%d ",i);

}
}


