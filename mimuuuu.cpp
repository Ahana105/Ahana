/*Write a c program to take user and display the output in screen as an array.*/
#include <stdio.h>
int main()
{
	int i,arr[5];
	printf("enter the 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the output");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
