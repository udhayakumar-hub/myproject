#include<stdio.h>
int main()
{
int n,i,s;
for(i=2000;s=0,i<5000;i++)
{
n=i;
while(n!=0)
{
s=s*10+(n%10);
n/=10;
}
if(s==i)
printf("%d\n",s);
}

}                         
