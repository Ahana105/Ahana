/*W.A.C.P to find the largest number in an array*/
#include <stdio.h>
int main()
{
	int i,n,max;
	printf("enter an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	int a[n];
    max=a[0];
	printf("enter the elements");
	scanf("%d",&a[i]);
	if(a[i]>max)
	{
	max=a[i];
	}
}
	printf("the largest term= %d\n",max);
	return 0;
	
}
