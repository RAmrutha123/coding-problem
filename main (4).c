#include<stdio.h>
int main()
{
	int n,num,temp,rem,fact,sum=0,i;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rem=n%10;
		fact=1;
		for(i=1;i<=rem;i++)
		  fact*=i;
		sum+=fact;
		n/=10;
	}
	if(sum==num)
	  printf("strong number");
	else
	  printf("not strong number");
	return 0;
}
