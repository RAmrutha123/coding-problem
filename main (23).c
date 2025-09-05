#include<stdio.h>
int main()
{
	int n=5;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==3||j==1||j==5)
			  printf("* ");
			else
			  printf("  ");
		}
		for(j=1;j<=n;j++)
		{
			if(j==1||j==5||i==j&&i<=3||j+i==6&&j>=3)
			  printf("* ");
			else
			  printf("  ");
		}
		for(j=1;j<=n;j++)
		{
			if(i==1||i==3||j==1||j==5&&i<=3||i==4&&j==3||i==5&&j==5)
			  printf("* ");
			else
			  printf("  ");
		}
		for(j=1;j<=n;j++)
		{
			if(j==1||j==5||i==5)
			  printf("* ");
			else
			  printf("  ");
		}
		for(j=1;j<=n;j++)
		{
			if(i==1||j==3)
			  printf("* ");
			else
			  printf("  ");
		}
		for(j=1;j<=n;j++)
		{
			if(j==1||j==5||i==3)
			  printf("* ");
			else
			  printf("  ");
		}
		for(j=1;j<=n;j++)
		{
			if(i==1||i==3||j==1||j==5)
			  printf("* ");
			else
			  printf("  ");
		}
		
		printf("\n");
	}
	return 0;
}