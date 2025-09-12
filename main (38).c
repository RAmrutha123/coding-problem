#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<=b && a<=c)
	  printf("smallest a=%d",a);
	else if(b<=a && b<=c)
	   printf(" smallest b=%d",b);
	else
	   printf("smallest c:%d",c);
    return 0;
}