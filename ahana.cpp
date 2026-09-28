/*2+5+8+11+14+.. upto n terms summation*/
#include <stdio.h>
int main()
{
	int n,sum=0,i=1,tg=2;
	printf("enter the numbers");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=tg;
		tg=tg+3;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
