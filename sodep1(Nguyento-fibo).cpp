#include<stdio.h>
#include<math.h>


int snt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
	}
	return 1;
}

int sum(int n)
{
	int sum=0;
	while(n>0)
	{
		int x=n%10;
		sum+=x;
		n/=10;
	}
	return sum;
}



int main()
{
	
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long x,y;
	if(a>b)
	{
		x=b;
		y=a;
	}
	else
	{
		x=a;
		y=b;
	}
	int h[]={0,1,2,3,5,8,13,21,34};
	for(long long j=x;j<=y;j++)
	{	
		int x=sum(j);
		if(snt(j)==1)
		{
			for(int i=0;i<=9;i++)
			{
				if(x==h[i]) printf("%d ",j);
			}
		}
	}
}

