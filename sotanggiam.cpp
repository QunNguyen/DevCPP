#include<stdio.h>
#include<math.h>
int check1(int n)
{
    int c=n%10;
	n/=10;
	while(n!=0)
	{
		int  b=n%10;
		if(b>=c) return 0;
		c=b;
		n/=10;
	}
	return 1;
}

int check2(int n)
{
	int  c=n%10;
	n/=10;
	while(n!=0){
		int  b=n%10;
		if( b<=c) return 0;
		c=b;
		n/=10;
	}
	return 1;
}

int nguyento(int x)
{
    if(x<2) return 0;
    else
    {
    	for(int i=2;i<=sqrt(x);i++)
    	{
    		if(x%i==0) return 0;
		}
	}
	return 1;
} 

int mu(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++)
	{
		sum*=10;
	}
	return sum;
}
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		long long tr=mu(n-1);
		long long s=mu(n);
		long long dem=0;
		int a[100001]={0};
		long long j=0;
		for(long long i=tr;i<=s;i++)
		{
			if(check1(i)==1||check2(i)==1)
			{
				a[j]=i;
				j++;	
			}
		}
		for(long long k=0;k<j;k++)
		{
			if(nguyento(a[k])==1) dem++;
		}
		printf("%lld\n",dem);
	}

}
