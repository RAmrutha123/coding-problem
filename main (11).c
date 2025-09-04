#include<stdio.h>
int fact(int n)
{
	if(n==0)
	   return 1;
	else
	   return n*fact(n-1);
}
int main()
{
	int n,res;
	printf("enter n:");
	scanf("%d",&n);
	res=fact(n);
	printf("fact=%d",res);
	return 0;
}