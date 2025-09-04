#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		printf("%d X %d=%d\n",n,i,n*i);
	}
	return 0;
	
}