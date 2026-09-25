#include <stdio.h>
int main()
{
	int i=1,n,c=1,a=1;
	long int fact, sum=0;
	printf("enter the number of terms:");
	scanf("%d",&n);
	
	while(c<=n)
	{
	i=1;
	fact=1;
	while(i<=a)
	{
	fact=fact*i;
	i++;
	}
	sum=sum+fact;
	c++;
	a=a+2;
    }
printf("sum of the numbers=%d",sum);
return 0;
}
