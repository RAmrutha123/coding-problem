#include<stdio.h>
int main()
{
	int i,n,evensum=0,oddsum=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			evensum+=i;
		}
		else
		{
			oddsum+=i;
		}
	}
	printf("evensum=%d\n",evensum);
	printf("oddsum=%d",oddsum);
	return 0;
}