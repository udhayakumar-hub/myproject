/*	Name: Kamalanathan N
	Vector ID: V19CE7K6

	b) Write a program to print the palindrome nos between 2000 to 5000
*/

#include<stdio.h>
int main()
{
	int n,temp,r,rev;
	for(n = 2000;n<5000;n++)
	{
		temp = n;rev = 0;
		while(temp!=0)
		{
			r = temp % 10;
			rev = rev * 10 + r;
			temp /= 10;
		}
		if(rev == n)
			printf("%d ",n);
	}
	printf("\n");
}
