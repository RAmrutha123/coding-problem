#include<stdio.h>
int main()
{
	int n,i,j,spaces=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		spaces++;
	}
	spaces=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		spaces--;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		spaces++;
	}
	spaces=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		spaces--;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		spaces++;
	}
	spaces=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		spaces--;
	}
	return 0;
}