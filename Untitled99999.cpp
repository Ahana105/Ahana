/*W.A.C.P to find to find the average number of all elements in an array*/
#include <stdio.h>
int main()
{
	int i,n;
	float average,sum=0.0;
	printf("enter number of terms: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
         scanf("%d",&arr[i]);
         sum=sum+arr[i];
	}
    average=sum/n;
	printf("the average= %d\n",average);
	return 0;
}
