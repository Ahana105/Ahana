#include <stdio.h>
int main()
{
	int a=0,i=1,b=0,c=1,n,d=0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
