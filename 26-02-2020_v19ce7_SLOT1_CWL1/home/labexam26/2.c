/* Name     :Nirmal.M 
   Batch id : v19ce7n1
*/
#include<stdio.h>
int main()
{
int n,i,s;
printf("Palindrom Numbers Between 2000-5000 are\n");
for(i=2000;s=0,i<5000;i++)
{
n=i;
while(s=s*10+(n%10),n/=10);
if(s==i)
printf("%d\n",s);
}
}
