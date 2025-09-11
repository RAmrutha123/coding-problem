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
	int n,i,count=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  if(isprime(i))
	  {
	   printf("%d ",i);
	    count++;
	}
	printf("\ncount:%d",count);
	
   return 0;
}
