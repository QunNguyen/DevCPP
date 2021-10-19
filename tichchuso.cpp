#include<stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	long long sum=1,s;
	while(n>0)
	{
		s=n%10;
		sum*=s;
		n/=10;
	}
	printf("%d", sum);
}
