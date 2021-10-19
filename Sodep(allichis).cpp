#include<stdio.h>
#include<math.h>

int snt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0) return 0;
		}
	}
	return 1;
}

int check(int n)
{
		int test = 1;
		int test1 = 0;
		for(int i=2 ; i+i<=n ; i++)
		{
			if(snt(i)==1)
			{
				if(n%i==0)
				{
					test1=1;
					if(n%(i*i)!=0) test=0;	
				}
			} 
		}
		if(test && test1) return 1;
}

int main()
{
	long long a,b;
	scanf("%d%d",&a,&b);
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
	
	for(int i=x;i<=y;i++)
	{
		if(check(i)==1) printf("%d ",i);
	}
}
