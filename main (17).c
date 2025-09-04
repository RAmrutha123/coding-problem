#include<stdio.h>
int main()
{
	int i,j,spaces,stars,n;
	printf("enter n:");
	scanf("%d",&n);
	stars=1;
	spaces=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=stars;j++)
		{
			printf("*");
		}
		printf("\n");
		stars++;
		spaces--;
	}
	stars=n-1;
	spaces=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=stars;j++)
		{
			printf("*");
		}
		printf("\n");
	    stars--;
		spaces++;
	}
    return 0;
}