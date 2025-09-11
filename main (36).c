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
	int i,primepos=0,s,e,count=0;
	printf("enter s and e:");
	scanf("%d %d",&s,&e);
	printf("alternative prime number:");
	for(i=s;i<=e;i++)
	{
	  if(isprime(i))
	  {
	  	primepos++;
	  	if(primepos % 2!=0)
	  	{
	  	   printf("%d ",i);
	  	   count++;
	    }
	  }
    }
    printf("the total count of alternative prime numbers within range-%d",count);
   return 0;
}
