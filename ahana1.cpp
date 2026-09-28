/*1+2+4+7+11+.. upto n terms .W.A.C.P. to calculate sum of series*/
#include <stdio.h>
int main()
{
	int n,sum=0,i=1,t=1;
	printf("enter the numbers");
	scanf("%d",&n);
	
		while(i<=n){
		
		sum=sum+t;
		t=t+i;
		i++;
}
	printf("sum:%d\n",sum);
	return 0;
}
