int main()
{
int i,j,n,m;

for(n=5000;n>=1000;n--)
{
while(i<=n/2){
if(n%2==0)
break;
i++;
}
if(i==n/2 +1)
{
printf("%d",n);
}
}
