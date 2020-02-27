#include<stdio.h>
int main()
{
int n=5000,r,rev,temp,i;

//printf("enter n value\n");
//scanf("%d",&n);

// temp=n;
// while(n!=0)
// { r=n%10;
// rev=rev*10+r;
//  n/=10;
// }
// if(temp==rev)
 
// printf("palindrome%d\n",rev);
//else
 
// printf("not a palindrome\n");
//temp=n;  


for(i=2000;i<=n;i++)
{
temp=i;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n/=10;
}


if(temp==rev)
{
printf("%d \n",rev);
}

}
}



