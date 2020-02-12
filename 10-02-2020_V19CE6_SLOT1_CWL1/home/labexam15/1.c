//Arathi Menon v19ce6a4//
#include<stdio.h>
int main()
{
int n,c,i,s,r,p=0,t1;
printf("Enter the number\n");
scanf("%d",&n);
t1=n;
s=n%10;
n=n/10;
while(n!=0)
{
r=n%10;
if(r>s)
s=r;
n=n/10;
}
p=t1%10;
t1=t1/10;
if(p==s)
p=t1%10;
while(t1!=0)
{
r=t1%10;
if((r>p)&&(r!=s))
p=r;
t1=t1/10;
}
printf("Second highest=%d\n",p);

}
