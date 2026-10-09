/*w.a.p to find the sum of the following series:
1+10+101+1010+.... upto n terms*/
#include <stdio.h>
int main()
{
	int n;
	int i=1;long sum=0;long term=1;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		if (i%2==1)
		{
			term=(term*10);
		}
		else
		{ 
		term=(term*10)+1;
		}
		i++;
	}
	printf("sum of series=%d\n",sum);
	return 0;
}
