#include<stdio.h>
int main()
{
	int n,num,rem,rev=0;
	printf("enter n:");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		rem=num%10;
		rev=rev+rem*rem*rem;
		num=num/10;
	}
	if(n==rev)
	   printf("armstrong:%d",n);
	else
	   printf("not armstrong:%d",n);
    return 0;
}