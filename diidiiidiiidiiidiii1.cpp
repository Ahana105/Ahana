#include <stdio.h>
int main()
{int n,i=1,d=0,sum=0;
printf("enter a whole number");
scanf("%d",&n);
while(i<=n)
{d=n%10;
sum=sum+d;
n=n/10;
}
printf("sum=%d\n",sum);
}
