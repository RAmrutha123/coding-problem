#include<stdio.h>
int main()
{
	int n,i;
	int a=0,b=1,c=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("Fibonacci series:");
	for(i=1;i<=n;i++)
	{
	    printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}