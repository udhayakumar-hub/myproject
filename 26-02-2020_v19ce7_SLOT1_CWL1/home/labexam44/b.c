//Anuraj S
//V19ce7a1
//question = b


#include<stdio.h>
int main()

{
int n=2000,r,temp,sum=0;

for(n<5000;;n++)
{
temp=n;
while(n!=0)
{
r=temp%10;
sum=(sum*10)+r;
temp=temp/10;

}
if(n==sum)
printf("%d",n);
}



}
