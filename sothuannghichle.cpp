#include<stdio.h>

int check(long long n)
{
		long long revert = 0; 
		long long m = n; 
		while (m > 0) 
		{ 
			revert = revert * 10 + m % 10;
			m /= 10; 
		}

		if (revert == n) 
		{
			return 1;
		}
		return 0;
}

int tong(long long  n)
{
	int sum=0;
	while(n>0)
	{
		int x=n%10;
		if(x%2==0) return 0;
		sum+=x;
		n/=10;
	}

	if(sum%2!=0 ) return 1;
}

int main()
{
	int t;
	scanf("%d",&t);	
	while (t--)
	{
		long long  n;
		scanf("%lld" ,&n);
		if(tong(n)==1&&check(n)==1) printf("YES");
		else printf("NO");
		printf("\n");
	}

}

