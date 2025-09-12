#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	  printf("largest a=%d",a);
	else if(b>=a && b>=c)
	   printf(" largest b=%d",b);
	else
	   printf("largest c:%d",c);
    return 0;
}