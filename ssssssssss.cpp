#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
		if(n==sum)
		printf("perfect number");
		else
		printf("not a perfect number");
}
