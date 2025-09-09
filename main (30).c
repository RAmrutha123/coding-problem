#include<stdio.h>
int main()
{
	int n;
	int rem,even=0,odd=0,zero=0;
	printf("enter a number:");
	scanf("%d",&n);
	if(n==0)
	{
	   zero=1;
	}
	while(n!=0)
	{
		rem=n%10;
		if(rem==0)
		  zero++;
		else if(rem%2==0)
		  even++;
		else
		  odd++;
		n=n/10;	  
	}
	printf("evencount=%d\n",even);
	printf("oddcount=%d\n",odd);
	printf("zeroes=%d\n",zero);
 return 0;	
}