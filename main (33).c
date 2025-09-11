#include<stdio.h>
#include<stdbool.h>
 bool isprime(int n)
 {
 	int i,cnt=0;
 	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		   cnt++;
	}
	if(cnt==2)
	  return true;
	else
	  return false;
  return 0;

 	
 }
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("%d",isprime(n));
   return 0;
}

