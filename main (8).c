#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		//if(i%3==0)
		printf("%d X %d=%d\n",n,i,n*i);
	}
	return 0;
	
}