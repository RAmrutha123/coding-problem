#include<stdio.h>
int sum(int n)
{
	if(n==0)
	  return 0;
	else
	  return n+sum(n-1); 
}
int main()
{
	int n,res;
	printf("enter n:");
	scanf("%d",&n);
	res=sum(n);
	printf("sum=%d",res);
	return 0;
}