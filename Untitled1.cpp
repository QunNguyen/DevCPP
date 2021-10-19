#include<stdio.h>
#include<math.h>
#include<stdio.h>

int check(int n)
{
	int dem =0;
	for(int i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			dem++;
		}
		if(dem==1)
		{
		return true;
		}
		return false ;
	}
}

int main()
{
	int a[100];
	int N;
	scanf("%d", &N);
	for(int j=0; j<N; j++)
	{
		scanf("%d" , &a[j]);
	}
	for(int j=0; j<N; j++)
	{
		if (check(a[j])== true )
		{
			printf("%d ", a[j]);
		}
	}
	return 0;
}
