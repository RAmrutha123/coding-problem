#include<stdio.h>
int main()
{
	int n,rem,rev=0,num;
	printf("enter n:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(num==rev)
	  printf("palindrome");
	else if(num<0)
	  printf("invalid");
	else
	  printf("not palindrome");

  return 0;
}