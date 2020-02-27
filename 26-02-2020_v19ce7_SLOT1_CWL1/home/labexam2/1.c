/* NAME:T.Jessilin Percis
   BATCH ID:V19ce7t1
*/
/* b.write a program to print the palindrome number btw 2000 to 5000 */
#include<stdio.h>
int main()
{
int i,r,n,s=0;
printf("The palindrom number between 2000 to 5000 is\n");
for(i=2000;i<=5000;i++)
{
n=i;s=0;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(i==s)
printf("%d ",i);
}
}

