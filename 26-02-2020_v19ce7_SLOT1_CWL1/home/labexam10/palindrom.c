

//Batch id(v19ce7s11) T.Senthamizh elakkiya

#include<stdio.h>
int main()
{
int n,s=0,rem,temp;
printf("enter the n value:\n");
scanf("%d",&n);
temp=n;
for(n=2000;n<5000;n++)
{
if(n!=0)
{

rem=n%10;
s=s*10+rem;
n=n/10;
}
printf("%d\n",s);
//if(s==temp);
//printf("this is palindrome");
}
}

