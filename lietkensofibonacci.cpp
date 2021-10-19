#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	scanf("%d",&n);
	long long f0=0,f1=1,fn;
	if(n==1)
	{
		printf("%d",f0);
	}
	if(n==2)
	{
		printf("%d %d",f0,f1);
	}
	if(n>=3)
	{
		printf("%d %d ",f0,f1);
		for(int i=2;i<n;i++)
		{
			fn=f0+f1;
			f0=f1;
			f1=fn;
			printf("%d ",fn);
		}
	}
}
