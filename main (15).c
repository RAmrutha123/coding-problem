#include<stdio.h>
int main()
{	int i,j,n1,n2;
    printf("enter n1 rows:");
	scanf("%d",&n1);
	printf("enter n2 column:");
	scanf("%d",&n2);
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}