//1st technique
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d and b=%d",a,b);
	return 0;
}

//2nd technique
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d and b=%d",a,b);
	return 0;
}

// 3rd technique
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d and b=%d",a,b);
	return 0;
}

// 4th technique
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("a=%d and b=%d",a,b);
	return 0;
}